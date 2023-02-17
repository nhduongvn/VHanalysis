#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.310117,-0.1324087,7.029799,0.9709971);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLogy();
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
   st->SetMinimum(1e+10);
   st->SetMaximum(81.96729);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",30,0,6);
   st_stack_87->SetMinimum(-3.286037e+09);
   st_stack_87->SetMaximum(-50.5961);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_87->GetXaxis()->SetRange(1,31);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Events/0.2");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.08259225);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.2252153);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.2950583);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.5487649);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.5699055);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.5617994);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.6243259);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.5680867);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.4601149);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.3927354);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.3171772);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.2094012);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.1061919);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.1221619);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.04260208);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.03025313);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.00529303);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.002397148);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,0.002650172);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.01445992);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.0254843);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.02970557);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.05484588);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.04005785);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.03967531);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.04197624);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.04241695);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.03589856);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.03305879);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.02991755);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.02391965);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.01732675);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.01822688);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.01023722);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.009211312);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.003752817);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.002397148);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,0.002650172);
   VbbHcc_algo_H_dR_stack_1->SetEntries(2101);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.01829777);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.05259455);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.09703613);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.1767157);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.2237965);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.2212);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.1953469);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.1279325);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.07566308);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.06695578);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.04935553);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.03368043);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.03505497);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.02662579);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.0130811);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.006961815);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.004774369);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.003272768);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.001192256);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0003156401);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.002529857);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.004329223);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.005820227);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.008473346);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.009854209);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.008887511);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.008357342);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.006746249);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.005099468);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.004874034);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.004199469);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.0034492);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.003438239);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.003046408);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.002102043);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.001613718);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.001310025);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.001104301);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0006929274);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0003156401);
   VbbHcc_algo_H_dR_stack_2->SetEntries(4230);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
