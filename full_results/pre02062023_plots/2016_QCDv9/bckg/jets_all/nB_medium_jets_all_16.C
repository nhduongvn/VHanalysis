#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_16()
{
//=========Macro generated from canvas: nB_medium_jets_all_16/nB_medium_jets_all_16
//=========  (Mon Dec 19 11:02:48 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_16 = new TCanvas("nB_medium_jets_all_16", "nB_medium_jets_all_16",0,0,600,600);
   nB_medium_jets_all_16->SetHighLightColor(2);
   nB_medium_jets_all_16->Range(-2.683529,-2.350169e+11,11.21633,1.723457e+12);
   nB_medium_jets_all_16->SetFillColor(0);
   nB_medium_jets_all_16->SetFillStyle(4000);
   nB_medium_jets_all_16->SetBorderMode(0);
   nB_medium_jets_all_16->SetBorderSize(2);
   nB_medium_jets_all_16->SetLeftMargin(0.15709);
   nB_medium_jets_all_16->SetRightMargin(0.1234783);
   nB_medium_jets_all_16->SetBottomMargin(0.12);
   nB_medium_jets_all_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_16->SetFrameBorderMode(0);
   nB_medium_jets_all_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.52761e+12);
   
   TH1F *st_stack_121 = new TH1F("st_stack_121","",10,-0.5,9.5);
   st_stack_121->SetMinimum(0);
   st_stack_121->SetMaximum(1.52761e+12);
   st_stack_121->SetDirectory(0);
   st_stack_121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_121->SetLineColor(ci);
   st_stack_121->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_121->GetXaxis()->SetRange(1,10);
   st_stack_121->GetXaxis()->SetLabelFont(42);
   st_stack_121->GetXaxis()->SetTitleOffset(1);
   st_stack_121->GetXaxis()->SetTitleFont(42);
   st_stack_121->GetYaxis()->SetTitle("Events/1.0");
   st_stack_121->GetYaxis()->SetLabelFont(42);
   st_stack_121->GetYaxis()->SetTitleSize(0.037);
   st_stack_121->GetYaxis()->SetTitleFont(42);
   st_stack_121->GetZaxis()->SetLabelFont(42);
   st_stack_121->GetZaxis()->SetTitleOffset(1);
   st_stack_121->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_121);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.018403e+12);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,1.193376e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,1.305187e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,7.033255e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,3.30391e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,1161668);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,40359.87);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,771.7476);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(9,1.532233);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.34456e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,4.544927e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,1.467562e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,3278761);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,670089.1);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,115255.3);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,20287.63);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,433.8574);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(9,0.8863671);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(2.445319e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,3085126);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,1.161424e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,1.235896e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,2513196);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,261420.8);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,20092.78);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,1368.19);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,101.8789);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,10.1459);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,1.179476);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,0.1835559);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,466.4478);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,909.6847);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,943.3961);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,431.5942);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,140.6067);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,39.21318);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,10.30322);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,2.858552);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,0.8967463);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.3166853);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.1297941);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(4.67375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_16->Modified();
   nB_medium_jets_all_16->cd();
   nB_medium_jets_all_16->SetSelected(nB_medium_jets_all_16);
}
