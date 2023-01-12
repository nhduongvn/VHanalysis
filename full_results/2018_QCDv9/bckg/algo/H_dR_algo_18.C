#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Mon Dec 19 11:11:46 2022) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-239218.3,7.264125,1754268);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1554919);
   
   TH1F *st_stack_79 = new TH1F("st_stack_79","",30,0,6);
   st_stack_79->SetMinimum(0);
   st_stack_79->SetMaximum(1554919);
   st_stack_79->SetDirectory(0);
   st_stack_79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_79->SetLineColor(ci);
   st_stack_79->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_79->GetXaxis()->SetRange(1,31);
   st_stack_79->GetXaxis()->SetLabelFont(42);
   st_stack_79->GetXaxis()->SetTitleOffset(1);
   st_stack_79->GetXaxis()->SetTitleFont(42);
   st_stack_79->GetYaxis()->SetTitle("Events/0.2");
   st_stack_79->GetYaxis()->SetLabelFont(42);
   st_stack_79->GetYaxis()->SetTitleSize(0.037);
   st_stack_79->GetYaxis()->SetTitleFont(42);
   st_stack_79->GetZaxis()->SetLabelFont(42);
   st_stack_79->GetZaxis()->SetTitleOffset(1);
   st_stack_79->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_79);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,485777);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,588712.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,690859.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,539057);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,645734.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,542529.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,735057.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,716983.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,803240);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,679030.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,944060.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,1023987);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,859377.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,699740.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,518410.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,331342.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,237532.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,92754.04);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,99904.24);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,69583.82);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,37726.27);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,6285.352);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,2922.321);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,1005.449);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,449.1439);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,5.395837);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,49842.23);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,64509.82);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,91997.09);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,70409.69);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,83470.9);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,66544.55);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,82715.57);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,76584.33);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,88591.56);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,68444.87);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,99240.02);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,116179.1);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,95955.72);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,73647.98);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,84962.38);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,62478.48);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,55210);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,24888.16);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,34003.98);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,33907.57);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,24006.27);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,2431.875);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,1902.553);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,574.8924);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,383.0423);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,5.395837);
   VbbHcc_algo_H_dR_stack_1->SetEntries(42604);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,2.348087);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,3818.493);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,8374.544);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,12165.44);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,15915.36);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,17438.6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,17181.45);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,16326.7);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,15595.43);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,15322.6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,14762.53);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,13926);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,12625.53);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,11408.73);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,10013.72);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,5934.939);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,3683.68);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,2251.401);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,1307.763);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,736.5833);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,384.5415);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,202.656);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,92.91443);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,35.72608);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,13.36169);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,3.630874);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.5196475);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,0.04266293);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.4302265);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,18.46769);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,26.93906);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,32.40387);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,37.48255);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,39.00799);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,39.4095);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,38.00472);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,37.62543);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,38.26555);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,36.65968);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,35.47306);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,33.98442);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,32.02413);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,29.62272);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,23.51947);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,18.43739);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,14.81466);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,10.38467);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,8.435102);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,5.503355);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,4.176369);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.853789);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.718818);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,1.024463);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.5596486);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1870968);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,0.04266293);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2750781);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
