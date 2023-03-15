#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,-973731.9,1.171633,7140700);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6329257);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0);
   st_stack_63->SetMaximum(6329257);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Event/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,4803603);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,2234933);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,1261227);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,621709);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,349264.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,230828.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,196661.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,108024.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,70822.73);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,42522.05);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,32380.43);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,49395.79);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,18405.82);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,8798.25);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,7939.458);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,1951.676);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,1148.646);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,1036.238);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,1129.951);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,21.20851);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,42.55708);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,97709.52);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,73600);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,72583.34);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,36253.44);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,15011.87);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,13290.04);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,33932.98);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,10089.84);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,7309.651);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,6364.225);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,5157.179);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,24126.66);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,4376.026);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,2553.007);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,2897.978);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,682.1988);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,557.2425);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,519.3785);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,654.1383);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,16.04866);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,42.55708);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(261557);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.1713334);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,449680.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,326688.5);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,220099.2);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,151313.5);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,106374.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,76076.21);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,54974.02);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,39910.07);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,29024.79);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,20959.71);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,15114.54);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,10692.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,7545.77);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,5178.415);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,3501.34);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,2274.381);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,1441.855);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,840.0526);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,466.0381);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,235.9064);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,102.2135);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,37.90743);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,9.912422);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,1.348055);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.1221601);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.105079);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,196.6278);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,166.2678);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,136.9208);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,113.6355);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,95.43455);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,80.68726);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,69.26912);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,58.00024);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,49.79898);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,42.02571);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,35.93739);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,29.66328);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,25.66111);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,21.54428);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,18.16954);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,14.02672);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,11.45479);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,8.319375);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,6.812508);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,4.529206);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,2.879451);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,1.699814);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,0.8856023);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.3172159);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.08769208);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(2.230134e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
