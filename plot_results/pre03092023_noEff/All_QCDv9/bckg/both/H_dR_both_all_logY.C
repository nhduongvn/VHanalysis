#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all_logY()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Thu Feb 16 10:37:40 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,-0.9750025,7.264125,9.881887);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetLogy();
   H_dR_both_all->SetLeftMargin(0.15709);
   H_dR_both_all->SetRightMargin(0.1234783);
   H_dR_both_all->SetBottomMargin(0.12);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.521662e+08);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(2.127278);
   st_stack_152->SetMaximum(6.254572e+08);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_152->GetXaxis()->SetRange(1,31);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetTitleOffset(1);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Events/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,1009.339);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,1114950);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,1160733);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,940667.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,846625.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,946769);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,895479.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,1030927);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,1120838);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,1260654);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,1258556);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,1427466);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,1822548);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,1941171);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,2181065);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,1394193);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,1046060);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,796259.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,601167.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,528285.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,351895.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,265190.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,200352.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,110654.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,58628.21);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,19498.64);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(28,6936.377);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(29,437.5619);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,478.5375);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,24490);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,26751.14);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,38099.47);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,29957.93);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,50539.28);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,31671.24);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,52388.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,54770.12);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,55690.98);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,39047.19);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,30232.91);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,79918.18);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,54988.77);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,76549.79);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,56132.73);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,48352.18);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,27568.87);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,29783.37);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,50068.14);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,14390.94);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,17227.74);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,24556.38);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,19751.94);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,6895.511);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,2529.408);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(28,2105.009);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(29,394.2688);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(784962);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(2,77.45176);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,84890.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,149560.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,175268);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,187890.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,181104.4);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,169511.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,166094);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,174854.1);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,194931.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,223463.4);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,258145.3);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,296492.1);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,334133.4);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,340596.5);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,194177.1);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,121867.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,80257.55);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,53307.5);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,35184.14);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,22645.85);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,14194.17);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,8425.862);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,4452.618);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,2159.827);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,872.7328);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,224.5307);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(29,16.94029);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(2,4.376299);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,84.04181);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,111.044);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,119.7668);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,123.9634);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,121.7686);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,117.8932);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,117.0737);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,120.5449);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,126.8861);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,136.2822);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,146.1457);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,156.818);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,166.9846);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,168.4187);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,127.1255);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,100.5319);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,80.84907);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,65.86399);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,52.97603);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,42.76855);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,33.65766);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,25.64675);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,18.23377);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,12.64999);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,8.102046);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,3.984231);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(29,1.100293);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(4.860908e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}
