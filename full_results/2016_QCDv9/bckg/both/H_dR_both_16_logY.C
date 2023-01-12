#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.353788,-2.146703,7.264125,10.30003);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15709);
   H_dR_both_16->SetRightMargin(0.1234783);
   H_dR_both_16->SetBottomMargin(0.12);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.172875);
   st->SetMaximum(4.190701e+08);
   
   TH1F *st_stack_133 = new TH1F("st_stack_133","",30,0,6);
   st_stack_133->SetMinimum(0.222282);
   st_stack_133->SetMaximum(1.135934e+09);
   st_stack_133->SetDirectory(0);
   st_stack_133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_133->SetLineColor(ci);
   st_stack_133->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_133->GetXaxis()->SetRange(1,31);
   st_stack_133->GetXaxis()->SetLabelFont(42);
   st_stack_133->GetXaxis()->SetTitleOffset(1);
   st_stack_133->GetXaxis()->SetTitleFont(42);
   st_stack_133->GetYaxis()->SetTitle("Events/0.2");
   st_stack_133->GetYaxis()->SetLabelFont(42);
   st_stack_133->GetYaxis()->SetTitleSize(0.037);
   st_stack_133->GetYaxis()->SetTitleFont(42);
   st_stack_133->GetZaxis()->SetLabelFont(42);
   st_stack_133->GetZaxis()->SetTitleOffset(1);
   st_stack_133->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_133);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,1978.449);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,1713126);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,2220565);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,1609618);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,1582797);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,1607183);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,1630684);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,1859936);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,1863676);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,2388125);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,2486687);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,2822807);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,3409784);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,3411481);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,3995437);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,2941138);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,2081281);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,1567667);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,1397898);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1161984);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,766134.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,629306.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,433555.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,220804.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,202724.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,88785.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,14837.86);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,1154.402);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,1497.617);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,88584.07);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,118263.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,95040.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,93687.52);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,96314.92);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,91805.23);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,106895.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,100819.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,130507.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,114029.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,130929.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,153295.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,135051.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,160353.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,149387.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,119715.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,93440.83);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,103870.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,98829.53);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,71665.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,68438.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,51538.87);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,28571.03);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,46221.68);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,20216.47);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,3783.076);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,539.3939);
   VbbHcc_both_H_dR_stack_1->SetEntries(542633);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,42.80432);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,47715.98);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,84055.54);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,102157.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,122367.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,133299.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,137072.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,138663.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,141411.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,147799.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,157501.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,169515.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,183587.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,197039.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,195264.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,113549.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,74104.55);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,50883.52);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,35345.84);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,24360.62);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,16559.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,10847.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,6810.41);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,3768.956);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,1910.556);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,828.8796);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,246.1845);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,18.47265);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.812765);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,61.90245);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,82.31863);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,90.78472);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,99.31368);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,103.6224);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,105.1538);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,105.8888);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,107.0814);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,109.628);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,113.3167);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,117.7401);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,122.6997);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,127.2386);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,126.7035);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,96.28874);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,77.40963);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,63.83826);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,52.89175);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,43.68306);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,35.80493);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,28.78761);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,22.69274);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,16.79043);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,11.87637);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,7.795085);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,4.17605);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,1.139808);
   VbbHcc_both_H_dR_stack_2->SetEntries(3.109335e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
