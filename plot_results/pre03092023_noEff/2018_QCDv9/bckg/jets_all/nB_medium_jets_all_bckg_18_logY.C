#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_bckg_18/nB_medium_jets_all_bckg_18
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_bckg_18 = new TCanvas("nB_medium_jets_all_bckg_18", "nB_medium_jets_all_bckg_18",0,0,600,600);
   nB_medium_jets_all_bckg_18->SetHighLightColor(2);
   nB_medium_jets_all_bckg_18->Range(-2.683529,-2.142271,11.21633,16.69215);
   nB_medium_jets_all_bckg_18->SetFillColor(0);
   nB_medium_jets_all_bckg_18->SetFillStyle(4000);
   nB_medium_jets_all_bckg_18->SetBorderMode(0);
   nB_medium_jets_all_bckg_18->SetBorderSize(2);
   nB_medium_jets_all_bckg_18->SetLogy();
   nB_medium_jets_all_bckg_18->SetLeftMargin(0.15709);
   nB_medium_jets_all_bckg_18->SetRightMargin(0.1234783);
   nB_medium_jets_all_bckg_18->SetBottomMargin(0.12);
   nB_medium_jets_all_bckg_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_18->SetFrameBorderMode(0);
   nB_medium_jets_all_bckg_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.76401e+14);
   
   TH1F *st_stack_186 = new TH1F("st_stack_186","",10,-0.5,9.5);
   st_stack_186->SetMinimum(1.311776);
   st_stack_186->SetMaximum(6.437401e+14);
   st_stack_186->SetDirectory(0);
   st_stack_186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_186->SetLineColor(ci);
   st_stack_186->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_186->GetXaxis()->SetRange(1,10);
   st_stack_186->GetXaxis()->SetLabelFont(42);
   st_stack_186->GetXaxis()->SetTitleOffset(1);
   st_stack_186->GetXaxis()->SetTitleFont(42);
   st_stack_186->GetYaxis()->SetTitle("Events/1.0");
   st_stack_186->GetYaxis()->SetLabelFont(42);
   st_stack_186->GetYaxis()->SetTitleSize(0.037);
   st_stack_186->GetYaxis()->SetTitleFont(42);
   st_stack_186->GetZaxis()->SetLabelFont(42);
   st_stack_186->GetZaxis()->SetTitleOffset(1);
   st_stack_186->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_186);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.764006e+12);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,2.473077e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,3.156007e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,2.147134e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,1.226963e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,5171836);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,235333.7);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,29921.46);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(9,440.1623);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,2.257314e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,8.209334e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,2.873837e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,6990788);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,1582523);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,296587.4);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,60650.05);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,24724.54);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(9,368.9906);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(3.038349e+08);

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
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,3842297);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,1.854885e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,2.476575e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,5793347);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,700497.9);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,62675.69);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,5013.235);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,411.0277);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,39.72839);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,5.545777);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,0.6196356);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,572.0573);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,1262.268);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,1462.587);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,706.1521);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,243.9676);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,72.7159);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,20.86399);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,5.938003);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,1.850572);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.6993774);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.2219099);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(7.957776e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_bckg_18->Modified();
   nB_medium_jets_all_bckg_18->cd();
   nB_medium_jets_all_bckg_18->SetSelected(nB_medium_jets_all_bckg_18);
}
