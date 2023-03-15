#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_alljet_17()
{
//=========Macro generated from canvas: H_dR_alljet_17/H_dR_alljet_17
//=========  (Tue Feb 14 16:10:12 2023) by ROOT version 6.26/06
   TCanvas *H_dR_alljet_17 = new TCanvas("H_dR_alljet_17", "H_dR_alljet_17",0,0,600,600);
   H_dR_alljet_17->SetHighLightColor(2);
   H_dR_alljet_17->Range(-1.353788,-3.749737e+10,7.264125,2.749807e+11);
   H_dR_alljet_17->SetFillColor(0);
   H_dR_alljet_17->SetFillStyle(4000);
   H_dR_alljet_17->SetBorderMode(0);
   H_dR_alljet_17->SetBorderSize(2);
   H_dR_alljet_17->SetLeftMargin(0.15709);
   H_dR_alljet_17->SetRightMargin(0.1234783);
   H_dR_alljet_17->SetBottomMargin(0.12);
   H_dR_alljet_17->SetFrameFillStyle(1000);
   H_dR_alljet_17->SetFrameBorderMode(0);
   H_dR_alljet_17->SetFrameFillStyle(1000);
   H_dR_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.437329e+11);
   
   TH1F *st_stack_214 = new TH1F("st_stack_214","",30,0,6);
   st_stack_214->SetMinimum(0);
   st_stack_214->SetMaximum(2.437329e+11);
   st_stack_214->SetDirectory(0);
   st_stack_214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_214->SetLineColor(ci);
   st_stack_214->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_214->GetXaxis()->SetRange(1,31);
   st_stack_214->GetXaxis()->SetLabelFont(42);
   st_stack_214->GetXaxis()->SetTitleOffset(1);
   st_stack_214->GetXaxis()->SetTitleFont(42);
   st_stack_214->GetYaxis()->SetTitle("Events/0.2");
   st_stack_214->GetYaxis()->SetLabelFont(42);
   st_stack_214->GetYaxis()->SetTitleSize(0.037);
   st_stack_214->GetYaxis()->SetTitleFont(42);
   st_stack_214->GetZaxis()->SetLabelFont(42);
   st_stack_214->GetZaxis()->SetTitleOffset(1);
   st_stack_214->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_214);
   
   
   TH1D *VbbHcc_alljet_H_dR_stack_1 = new TH1D("VbbHcc_alljet_H_dR_stack_1","",30,0,6);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(2,3943081);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(3,2.870257e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(4,6.467278e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(5,5.678268e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(6,6.316512e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(7,7.414485e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(8,9.003283e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(9,1.144946e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(10,1.525625e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(11,2.13628e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(12,3.125146e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(13,4.719945e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(14,7.23218e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(15,1.121142e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(16,1.624833e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(17,1.1173e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(18,8.3881e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(19,6.676684e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(20,5.412738e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(21,4.424939e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(22,3.634903e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(23,2.9956e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(24,2.471976e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(25,2.041576e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(26,1.68564e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(27,1.395458e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(28,1.148333e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(29,9.468223e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(30,7.744459e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(31,3.008173e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(2,262912.8);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(3,7054517);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(4,1.068734e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(5,1.001768e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(6,1.05652e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(7,1.144088e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(8,1.258486e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(9,1.416189e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(10,1.629486e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(11,1.92014e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(12,2.312038e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(13,2.828783e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(14,3.485151e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(15,4.316981e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(16,5.176286e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(17,4.301031e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(18,3.735556e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(19,3.340139e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(20,3.013309e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(21,2.730048e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(22,2.479358e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(23,2.255313e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(24,2.052708e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(25,1.869009e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(26,1.701519e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(27,1.550981e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(28,1.409363e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(29,1.282135e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(30,1.161087e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(31,2.304328e+07);
   VbbHcc_alljet_H_dR_stack_1->SetEntries(2.5692e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_dR_stack_2 = new TH1D("VbbHcc_alljet_H_dR_stack_2","",30,0,6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(2,141.083);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(3,164638.8);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(4,393504);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(5,572519.9);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(6,746257.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(7,891393.6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(8,1034342);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(9,1218926);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(10,1485433);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(11,1866435);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(12,2395613);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(13,3097216);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(14,3960315);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(15,4905361);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(16,5303655);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(17,2829603);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(18,1700430);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(19,1101962);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(20,734173);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(21,496856.7);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(22,340915.9);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(23,236078);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(24,164791.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(25,115848.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(26,81696.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(27,57942.01);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(28,40974.36);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(29,28831.27);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(30,20044.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(31,41555.11);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(2,2.992542);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(3,103.3398);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(4,160.3038);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(5,193.1019);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(6,219.859);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(7,239.9104);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(8,258.533);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(9,281.2205);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(10,311.4718);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(11,350.6039);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(12,398.8534);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(13,455.3335);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(14,516.6706);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(15,576.6574);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(16,600.5885);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(17,437.2676);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(18,337.5968);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(19,270.5884);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(20,219.7996);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(21,179.8933);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(22,148.2161);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(23,122.6859);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(24,102.033);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(25,85.20207);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(26,71.28761);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(27,59.8934);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(28,50.30086);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(29,42.128);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(30,35.08367);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(31,50.15537);
   VbbHcc_alljet_H_dR_stack_2->SetEntries(6.067086e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_1","QCD","F");

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
   H_dR_alljet_17->Modified();
   H_dR_alljet_17->cd();
   H_dR_alljet_17->SetSelected(H_dR_alljet_17);
}
