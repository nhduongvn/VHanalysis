#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_16()
{
//=========Macro generated from canvas: H_dR_seljet_16/H_dR_seljet_16
//=========  (Tue Feb 14 16:10:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_16 = new TCanvas("H_dR_seljet_16", "H_dR_seljet_16",0,0,600,600);
   H_dR_seljet_16->SetHighLightColor(2);
   H_dR_seljet_16->Range(-1.353788,-5.234642e+08,7.264125,3.838738e+09);
   H_dR_seljet_16->SetFillColor(0);
   H_dR_seljet_16->SetFillStyle(4000);
   H_dR_seljet_16->SetBorderMode(0);
   H_dR_seljet_16->SetBorderSize(2);
   H_dR_seljet_16->SetLeftMargin(0.15709);
   H_dR_seljet_16->SetRightMargin(0.1234783);
   H_dR_seljet_16->SetBottomMargin(0.12);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.402518e+09);
   
   TH1F *st_stack_277 = new TH1F("st_stack_277","",30,0,6);
   st_stack_277->SetMinimum(0);
   st_stack_277->SetMaximum(3.402518e+09);
   st_stack_277->SetDirectory(0);
   st_stack_277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_277->SetLineColor(ci);
   st_stack_277->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_277->GetXaxis()->SetRange(1,31);
   st_stack_277->GetXaxis()->SetLabelFont(42);
   st_stack_277->GetXaxis()->SetTitleOffset(1);
   st_stack_277->GetXaxis()->SetTitleFont(42);
   st_stack_277->GetYaxis()->SetTitle("Events/0.2");
   st_stack_277->GetYaxis()->SetLabelFont(42);
   st_stack_277->GetYaxis()->SetTitleSize(0.037);
   st_stack_277->GetYaxis()->SetTitleFont(42);
   st_stack_277->GetZaxis()->SetLabelFont(42);
   st_stack_277->GetZaxis()->SetTitleOffset(1);
   st_stack_277->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_277);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,105476.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.038327e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,1.541861e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,1.349313e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,1.397034e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,1.611558e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,1.936328e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,2.468778e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,3.293035e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,4.661947e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,6.626146e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,9.543181e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,1.373213e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,1.888222e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,2.265638e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,1.432253e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,9.975511e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,7.306929e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,5.361171e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,3.8907e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,2.745154e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,1.895367e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,1.231755e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,7.409434e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,3.944813e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,1.735038e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,5249934);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,252175.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,15562.12);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,942253.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,1247756);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,1201502);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,1212030);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,1293538);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,1393584);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,1538642);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,1709497);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,1988044);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,2289090);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,2673071);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,3173788);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,3640912);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,3961541);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,3168241);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,2656171);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,2294763);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,1991052);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,1705402);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,1447797);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,1214690);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,995858.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,773885.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,565457.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,388187.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,221614.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,36749.23);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(6.330104e+07);

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
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,120.6321);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,128149.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,287526.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,391754.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,471346.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,521580.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,568626.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,644146.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,768003.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,955651.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,1222985);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,1581047);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,2023734);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,2510851);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,2707258);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,1394947);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,799172.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,487157.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,299747.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,183084.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,110168.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,64321.56);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,35779.79);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,18487.87);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,8531.449);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,3210.089);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,783.3098);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,44.32601);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,2.769965);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,91.70826);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,138.0755);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,161.4932);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,177.333);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,186.8549);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,195.5316);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,208.6217);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,228.4294);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,255.5414);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,289.9072);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,330.5093);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,374.8922);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,418.5437);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,435.2801);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,311.8941);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,235.4856);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,183.3324);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,143.3291);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,111.5719);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,86.18191);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,65.52037);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,48.62105);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,34.72995);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,23.42614);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,14.23304);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,6.92854);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,1.638194);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(2.795724e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_16->Modified();
   H_dR_seljet_16->cd();
   H_dR_seljet_16->SetSelected(H_dR_seljet_16);
}
