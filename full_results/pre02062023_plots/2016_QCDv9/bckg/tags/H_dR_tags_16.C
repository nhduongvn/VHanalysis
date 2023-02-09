#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Wed Jan 18 11:43:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.353788,-945332.9,7.264125,6932441);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15709);
   H_dR_tags_16->SetRightMargin(0.1234783);
   H_dR_tags_16->SetBottomMargin(0.12);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6144664);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0);
   st_stack_21->SetMaximum(6144664);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,2006.608);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,1702331);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,2207263);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,1561351);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,1589789);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,1603490);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,1585169);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,1816539);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,1825259);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,2345808);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,2361115);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,2774363);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,3339316);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,3358738);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,3909410);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,2899430);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,2076701);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,1542932);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,1405340);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,1127090);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,768400.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,604110.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,437493.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,251477.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,193536.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,85620.23);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,14860.46);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1205.053);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,1503.117);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,88579.66);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,115808.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,90352.03);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,93539.83);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,96714.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,87482.74);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,102545.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,96970.25);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,125688.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,104001.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,126778.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,147779.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,131832.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,155348.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,145590.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,116883.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,91294.97);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,102770.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,93979.38);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,71485.85);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,63893.66);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,52621.65);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,36474.96);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,43033.06);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,18985.17);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,3801.093);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,577.6575);
   VbbHcc_tags_H_dR_stack_1->SetEntries(458027);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,41.21428);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,45250.03);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,79979.32);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,97367.32);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,116759.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,127268);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,130859.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,132375.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,134972.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,141111.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,150403.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,162111.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,175728.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,188705);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,187032.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,108690.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,70844.53);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,48615.48);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,33766.82);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,23275.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,15785.17);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,10337.74);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,6497.973);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,3600.481);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,1831.322);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,796.1105);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,233.6644);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,17.52263);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.679288);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,56.56001);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,75.32016);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,83.11815);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,90.97576);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,94.96022);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,96.34178);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,96.9975);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,98.05657);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,100.3848);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,103.761);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,107.8673);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,112.4426);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,116.627);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,116.1396);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,88.27698);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,70.97219);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,58.53966);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,48.54109);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,40.11519);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,32.86388);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,26.43709);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,20.86289);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,15.45272);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,10.96078);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,7.192993);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,3.840436);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.053691);
   VbbHcc_tags_H_dR_stack_2->SetEntries(3.311648e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
