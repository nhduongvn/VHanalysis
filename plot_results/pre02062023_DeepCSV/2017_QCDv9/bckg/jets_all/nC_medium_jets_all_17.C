#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_17()
{
//=========Macro generated from canvas: nC_medium_jets_all_17/nC_medium_jets_all_17
//=========  (Mon Dec 19 11:02:48 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_17 = new TCanvas("nC_medium_jets_all_17", "nC_medium_jets_all_17",0,0,600,600);
   nC_medium_jets_all_17->SetHighLightColor(2);
   nC_medium_jets_all_17->Range(-2.683529,-1.164618e+11,11.21633,8.540533e+11);
   nC_medium_jets_all_17->SetFillColor(0);
   nC_medium_jets_all_17->SetFillStyle(4000);
   nC_medium_jets_all_17->SetBorderMode(0);
   nC_medium_jets_all_17->SetBorderSize(2);
   nC_medium_jets_all_17->SetLeftMargin(0.15709);
   nC_medium_jets_all_17->SetRightMargin(0.1234783);
   nC_medium_jets_all_17->SetBottomMargin(0.12);
   nC_medium_jets_all_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_17->SetFrameBorderMode(0);
   nC_medium_jets_all_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.570018e+11);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",10,-0.5,9.5);
   st_stack_126->SetMinimum(0);
   st_stack_126->SetMaximum(7.570018e+11);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_126->GetXaxis()->SetRange(1,10);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Events/1.0");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,4.266217e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,5.046594e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,2.969817e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,1.228069e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,4.175289e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,1.261615e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,3.499724e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,9.093666e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,2.268989e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,5.130738e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,1.516793e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,8.313229e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,8.974115e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,6.82749e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,4.356757e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,2.524836e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,1.382178e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,7249018);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,3687744);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1840016);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,870566.8);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,472164.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(3.0187e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3449641);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,8455986);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,9916437);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,7483365);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,4144467);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,1827002);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,679999.1);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,222637.1);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,66199.74);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,18201.26);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,6202.556);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,453.5567);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,728.96);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,806.1965);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,711.5775);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,535.5772);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,358.3144);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,219.7129);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,126.1654);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,68.95781);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,36.21717);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,21.14804);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(6.245234e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_17->Modified();
   nC_medium_jets_all_17->cd();
   nC_medium_jets_all_17->SetSelected(nC_medium_jets_all_17);
}
