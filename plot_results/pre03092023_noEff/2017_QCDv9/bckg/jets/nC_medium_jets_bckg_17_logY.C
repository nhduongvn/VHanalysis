#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_bckg_17_logY()
{
//=========Macro generated from canvas: nC_medium_jets_bckg_17/nC_medium_jets_bckg_17
//=========  (Wed Mar  1 14:06:40 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_bckg_17 = new TCanvas("nC_medium_jets_bckg_17", "nC_medium_jets_bckg_17",0,0,600,600);
   nC_medium_jets_bckg_17->SetHighLightColor(2);
   nC_medium_jets_bckg_17->Range(-2.683529,-2.112497,11.21633,16.51109);
   nC_medium_jets_bckg_17->SetFillColor(0);
   nC_medium_jets_bckg_17->SetFillStyle(4000);
   nC_medium_jets_bckg_17->SetBorderMode(0);
   nC_medium_jets_bckg_17->SetBorderSize(2);
   nC_medium_jets_bckg_17->SetLogy();
   nC_medium_jets_bckg_17->SetLeftMargin(0.15709);
   nC_medium_jets_bckg_17->SetRightMargin(0.1234783);
   nC_medium_jets_bckg_17->SetBottomMargin(0.12);
   nC_medium_jets_bckg_17->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_17->SetFrameBorderMode(0);
   nC_medium_jets_bckg_17->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.230994e+14);
   
   TH1F *st_stack_34 = new TH1F("st_stack_34","",10,-0.5,9.5);
   st_stack_34->SetMinimum(1.325359);
   st_stack_34->SetMaximum(4.453801e+14);
   st_stack_34->SetDirectory(0);
   st_stack_34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_34->SetLineColor(ci);
   st_stack_34->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_34->GetXaxis()->SetRange(1,10);
   st_stack_34->GetXaxis()->SetLabelFont(42);
   st_stack_34->GetXaxis()->SetTitleOffset(1);
   st_stack_34->GetXaxis()->SetTitleFont(42);
   st_stack_34->GetYaxis()->SetTitle("Events/1.0");
   st_stack_34->GetYaxis()->SetLabelFont(42);
   st_stack_34->GetYaxis()->SetTitleSize(0.037);
   st_stack_34->GetYaxis()->SetTitleFont(42);
   st_stack_34->GetZaxis()->SetLabelFont(42);
   st_stack_34->GetZaxis()->SetTitleOffset(1);
   st_stack_34->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_34);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,1.23098e+12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,1.660315e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,1.278599e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,3.337012e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.294815e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,489851.4);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,20460.99);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,908.4065);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,46.73951);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,0.5059063);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.416791e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,4.885e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,1.216439e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,1129848);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,166453.9);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,11775.05);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,1371.725);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,97.64453);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,17.57442);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,0.5059063);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(3.054959e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,1.481919e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,1.39545e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,5828086);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,1411364);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,227271.9);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,26925.16);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,2570.496);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,212.8759);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,17.48865);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,1.323197);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,953.8679);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,959.791);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,639.5515);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,321.9651);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,131.1038);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,45.43576);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,14.07493);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,4.047268);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,1.169599);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.3069056);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(6.313347e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_bckg_17->Modified();
   nC_medium_jets_bckg_17->cd();
   nC_medium_jets_bckg_17->SetSelected(nC_medium_jets_bckg_17);
}
