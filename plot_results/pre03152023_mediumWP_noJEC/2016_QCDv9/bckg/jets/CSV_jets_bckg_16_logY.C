#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_16_logY()
{
//=========Macro generated from canvas: CSV_jets_bckg_16/CSV_jets_bckg_16
//=========  (Thu Mar  9 13:30:10 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_16 = new TCanvas("CSV_jets_bckg_16", "CSV_jets_bckg_16",0,0,600,600);
   CSV_jets_bckg_16->SetHighLightColor(2);
   CSV_jets_bckg_16->Range(-0.2183529,-1.68957,1.171633,13.97541);
   CSV_jets_bckg_16->SetFillColor(0);
   CSV_jets_bckg_16->SetFillStyle(4000);
   CSV_jets_bckg_16->SetBorderMode(0);
   CSV_jets_bckg_16->SetBorderSize(2);
   CSV_jets_bckg_16->SetLogy();
   CSV_jets_bckg_16->SetLeftMargin(0.15709);
   CSV_jets_bckg_16->SetRightMargin(0.1234783);
   CSV_jets_bckg_16->SetBottomMargin(0.12);
   CSV_jets_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_bckg_16->SetFrameBorderMode(0);
   CSV_jets_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8.059645e+11);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",20,0,1);
   st_stack_8->SetMinimum(1.549629);
   st_stack_8->SetMaximum(2.563985e+12);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_8->GetXaxis()->SetRange(1,20);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Event/0.05");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,6.689043e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,4.109962e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,1.476037e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,7.834274e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,4.996703e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,3.54256e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,2.681818e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,2.132207e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,1.731878e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,1.476178e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,1.313442e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,1.158313e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,1.041592e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,9.853455e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,9.529754e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,9.943077e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,1.016418e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,1.147361e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,1.629186e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,9.161391e+09);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.104572e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,2.71363e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,1.623533e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.181591e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,9438204);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,7945673);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,6897427);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,6143795);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,5533548);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,5099048);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,4806055);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,4505243);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,4263959);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,4143777);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,4064164);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,4148565);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,4191042);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,4439680);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,5283571);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,1.2579e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(5.454877e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,4.627552e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,5399772);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,2621335);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,1762616);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,1373241);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1155739);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1020869);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,928643.1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,855098.7);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,828352.4);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,829251.8);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,826947.7);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,823248.6);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,859509.5);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,923078);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1059886);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1194405);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,1476662);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2308377);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,1.457658e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,1752.652);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,592.533);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,411.7601);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,337.2175);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,297.2919);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,272.4359);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,255.7545);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,243.6585);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,233.5223);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,229.6137);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,229.55);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,228.9973);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,228.2749);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,233.0683);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,241.359);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,258.4779);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,274.2039);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,304.7133);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,380.8746);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,957.8576);
   VbbHcc_jets_CSV_stack_2->SetEntries(1.442507e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_bckg_16->Modified();
   CSV_jets_bckg_16->cd();
   CSV_jets_bckg_16->SetSelected(CSV_jets_bckg_16);
}
