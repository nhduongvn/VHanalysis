#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_17_logY()
{
//=========Macro generated from canvas: H_dR_seljet_17/H_dR_seljet_17
//=========  (Wed Jan 18 11:42:56 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_17 = new TCanvas("H_dR_seljet_17", "H_dR_seljet_17",0,0,600,600);
   H_dR_seljet_17->SetHighLightColor(2);
   H_dR_seljet_17->Range(-1.353788,-0.004704684,7.264125,13.31915);
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
   st->SetMinimum(219.7978);
   st->SetMaximum(3.417449e+11);
   
   TH1F *st_stack_278 = new TH1F("st_stack_278","",30,0,6);
   st_stack_278->SetMinimum(39.27879);
   st_stack_278->SetMaximum(9.699866e+11);
   st_stack_278->SetDirectory(0);
   st_stack_278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_278->SetLineColor(ci);
   st_stack_278->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_278->GetXaxis()->SetRange(1,31);
   st_stack_278->GetXaxis()->SetLabelFont(42);
   st_stack_278->GetXaxis()->SetTitleOffset(1);
   st_stack_278->GetXaxis()->SetTitleFont(42);
   st_stack_278->GetYaxis()->SetTitle("Events/0.2");
   st_stack_278->GetYaxis()->SetLabelFont(42);
   st_stack_278->GetYaxis()->SetTitleSize(0.037);
   st_stack_278->GetYaxis()->SetTitleFont(42);
   st_stack_278->GetZaxis()->SetLabelFont(42);
   st_stack_278->GetZaxis()->SetTitleOffset(1);
   st_stack_278->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_278);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,219672.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.641999e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,2.759627e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.44672e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,2.5789e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,2.88347e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,3.416775e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,4.270231e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,5.551442e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,7.482502e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,1.034928e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,1.470168e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,2.063604e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,2.830777e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,3.414109e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,2.16055e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,1.514342e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.102753e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,8.154482e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,5.92439e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,4.169017e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,2.848855e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,1.87301e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,1.108344e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,5.747452e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,2.550793e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,7011181);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,348193);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,48426.78);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,1188339);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,1666635);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,1599154);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,1641263);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,1720892);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,1849568);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,2031523);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,2256142);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,2535211);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,2892788);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,3369912);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,3897985);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,4497730);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,4923534);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,3939431);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,3323636);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,2848415);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,2480985);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,2128448);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,1788538);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,1489905);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,1219103);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,943876.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,675549);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,461801.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,243732.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,47900.76);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(7.110996e+07);

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
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,125.0223);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,155147.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,354685.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,483888.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,585271.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,650278.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,711527);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,805492.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,959525.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,1191435);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,1519990);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,1960202);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,2503452);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,3101155);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,3339966);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,1717963);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,982539.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,597779.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,367039.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,223635.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,134135.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,77987.71);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,43199.38);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,22078.55);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,9984.044);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,3713.95);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,872.9732);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,49.708);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,2.873296);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,102.462);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,156.0734);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,182.8629);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,201.4667);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,212.8593);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,223.3559);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,238.4517);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,261.1863);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,292.1478);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,331.1882);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,377.422);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,427.9318);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,477.6438);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,496.5876);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,355.1576);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,267.5997);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,207.8844);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,162.1335);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,125.9095);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,96.90602);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,73.39198);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,54.23513);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,38.43155);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,25.56913);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,15.36248);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,7.27482);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,1.699816);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(3.452711e+08);

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
