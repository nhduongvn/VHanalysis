#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_17_logY()
{
//=========Macro generated from canvas: H_dR_seljet_17/H_dR_seljet_17
//=========  (Mon Dec 19 11:15:41 2022) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_17 = new TCanvas("H_dR_seljet_17", "H_dR_seljet_17",0,0,600,600);
   H_dR_seljet_17->SetHighLightColor(2);
   H_dR_seljet_17->Range(-1.353788,-0.01400441,7.264125,13.32053);
   H_dR_seljet_17->SetFillColor(0);
   H_dR_seljet_17->SetFillStyle(4000);
   H_dR_seljet_17->SetBorderMode(0);
   H_dR_seljet_17->SetBorderSize(2);
   H_dR_seljet_17->SetLogy();
   H_dR_seljet_17->SetLeftMargin(0.15709);
   H_dR_seljet_17->SetRightMargin(0.1234783);
   H_dR_seljet_17->SetBottomMargin(0.12);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(215.9268);
   st->SetMaximum(3.417997e+11);
   
   TH1F *st_stack_246 = new TH1F("st_stack_246","",30,0,6);
   st_stack_246->SetMinimum(38.56021);
   st_stack_246->SetMaximum(9.706747e+11);
   st_stack_246->SetDirectory(0);
   st_stack_246->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_246->SetLineColor(ci);
   st_stack_246->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_246->GetXaxis()->SetRange(1,31);
   st_stack_246->GetXaxis()->SetLabelFont(42);
   st_stack_246->GetXaxis()->SetTitleOffset(1);
   st_stack_246->GetXaxis()->SetTitleFont(42);
   st_stack_246->GetYaxis()->SetTitle("Events/0.2");
   st_stack_246->GetYaxis()->SetLabelFont(42);
   st_stack_246->GetYaxis()->SetTitleSize(0.037);
   st_stack_246->GetYaxis()->SetTitleFont(42);
   st_stack_246->GetZaxis()->SetLabelFont(42);
   st_stack_246->GetZaxis()->SetTitleOffset(1);
   st_stack_246->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_246);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,215801.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.640095e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,2.763161e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.449904e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,2.581208e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,2.881873e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,3.419555e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,4.263745e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,5.540636e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,7.484587e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,1.035955e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,1.470649e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,2.063397e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,2.831055e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,3.414657e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,2.160042e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,1.51423e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.102462e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,8.160022e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,5.922568e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,4.17048e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,2.848297e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,1.877092e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,1.107066e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,5.722816e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,2.548579e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,6962081);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,373118.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,47172.59);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,1170717);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,1645681);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,1579526);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,1620438);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,1697208);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,1826012);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,2001727);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,2222944);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,2503044);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,2857175);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,3326657);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,3846755);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,4439070);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,4860386);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,3886854);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,3280290);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,2810709);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,2450022);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,2099614);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,1766140);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,1469831);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,1206180);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,929455.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,663700.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,455304.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,239059.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,51470.89);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(7.519253e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,125.2689);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,155161.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,354665.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,483906.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,585328.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,650290.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,711543.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,805559.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,959490.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,1191370);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,1519947);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,1960223);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,2503528);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,3101147);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,3339967);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,1717939);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,982487.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,597785);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,367033.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,223659.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,134112.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,78011.66);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,43205.53);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,22066.53);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,9981.497);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,3713.994);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,872.7017);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,49.95574);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,2.840591);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,101.2204);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,154.1601);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,180.625);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,199.0123);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,210.2905);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,220.6982);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,235.6633);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,258.1607);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,288.8104);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,327.452);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,373.2152);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,423.2125);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,472.4097);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,491.1726);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,351.2621);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,264.6423);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,205.579);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,160.3225);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,124.4976);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,95.8003);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,72.56528);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,53.61866);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,37.98219);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,25.27455);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,15.18777);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,7.1884);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,1.686148);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(3.541626e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

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
   H_dR_seljet_17->Modified();
   H_dR_seljet_17->cd();
   H_dR_seljet_17->SetSelected(H_dR_seljet_17);
}
