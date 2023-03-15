#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Wed Jan 18 11:42:52 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,-1.214916,1.171633,11.22488);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15709);
   Aplanarity_tags_17->SetRightMargin(0.1234783);
   Aplanarity_tags_17->SetBottomMargin(0.12);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.531821e+09);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(1.896094);
   st_stack_62->SetMaximum(9.56982e+09);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("Aplanarity");
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,3.436242e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1.704356e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,9452146);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,5007035);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,2763585);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,1776226);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,1353858);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,712297.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,527007.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,321856.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,315884.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,149875.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,114343.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,59771.56);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,27582.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,59001.39);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,18956.22);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,5729.093);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,2202.811);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,1870.377);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,426.0428);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,473311.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,370220);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,288009.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,204570.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,141882.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,114223.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,113214);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,71114.78);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,67717.67);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,47817.43);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,55047.35);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,34365.31);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,32788.71);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,19673.73);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,5193.205);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,26605.67);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,14293.03);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,2284.451);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,754.902);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,1449.923);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,395.0852);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(539309);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.2323196);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,955787.2);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,679078.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,454447.4);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,312279.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,219696.3);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,157070.3);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,113164.3);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,82126.07);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,59522.41);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,43012.44);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,30802.96);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,21976.22);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,15351.29);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,10523.83);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,7049.733);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,4577.178);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,2820.694);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,1662.455);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,928.8129);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,472.6083);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,206.5678);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,78.4327);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,19.84427);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,3.661085);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.07408417);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.1359803);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,265.4428);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,225.2855);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,184.7202);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,153.3241);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,128.6968);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,108.8993);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,92.47261);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,78.7934);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,67.1409);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,57.06897);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,48.31487);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,40.84491);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,34.13415);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,28.28154);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,23.15914);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,18.64965);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,14.63699);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,11.23468);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,8.400065);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,5.980263);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,3.978578);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,2.454801);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,1.226612);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.5401835);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.07408417);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(4.693889e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
