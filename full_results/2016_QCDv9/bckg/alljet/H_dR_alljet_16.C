#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_alljet_16()
{
//=========Macro generated from canvas: H_dR_alljet_16/H_dR_alljet_16
//=========  (Thu Feb 16 10:35:36 2023) by ROOT version 6.26/06
   TCanvas *H_dR_alljet_16 = new TCanvas("H_dR_alljet_16", "H_dR_alljet_16",0,0,600,600);
   H_dR_alljet_16->SetHighLightColor(2);
   H_dR_alljet_16->Range(-1.353788,-2.596806e+10,7.264125,1.904324e+11);
   H_dR_alljet_16->SetFillColor(0);
   H_dR_alljet_16->SetFillStyle(4000);
   H_dR_alljet_16->SetBorderMode(0);
   H_dR_alljet_16->SetBorderSize(2);
   H_dR_alljet_16->SetLeftMargin(0.15709);
   H_dR_alljet_16->SetRightMargin(0.1234783);
   H_dR_alljet_16->SetBottomMargin(0.12);
   H_dR_alljet_16->SetFrameFillStyle(1000);
   H_dR_alljet_16->SetFrameBorderMode(0);
   H_dR_alljet_16->SetFrameFillStyle(1000);
   H_dR_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.687924e+11);
   
   TH1F *st_stack_213 = new TH1F("st_stack_213","",30,0,6);
   st_stack_213->SetMinimum(0);
   st_stack_213->SetMaximum(1.687924e+11);
   st_stack_213->SetDirectory(0);
   st_stack_213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_213->SetLineColor(ci);
   st_stack_213->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_213->GetXaxis()->SetRange(1,31);
   st_stack_213->GetXaxis()->SetLabelFont(42);
   st_stack_213->GetXaxis()->SetTitleOffset(1);
   st_stack_213->GetXaxis()->SetTitleFont(42);
   st_stack_213->GetYaxis()->SetTitle("Events/0.2");
   st_stack_213->GetYaxis()->SetLabelFont(42);
   st_stack_213->GetYaxis()->SetTitleSize(0.037);
   st_stack_213->GetYaxis()->SetTitleFont(42);
   st_stack_213->GetZaxis()->SetLabelFont(42);
   st_stack_213->GetZaxis()->SetTitleOffset(1);
   st_stack_213->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_213);
   
   
   TH1D *VbbHcc_alljet_H_dR_stack_1 = new TH1D("VbbHcc_alljet_H_dR_stack_1","",30,0,6);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(2,4200124);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(3,2.336893e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(4,4.547916e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(5,3.945084e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(6,4.374694e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(7,5.110607e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(8,6.292443e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(9,8.05898e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(10,1.090384e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(11,1.552711e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(12,2.290986e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(13,3.469625e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(14,5.285611e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(15,8.042038e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(16,1.125239e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(17,7.759936e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(18,5.851657e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(19,4.66702e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(20,3.785393e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(21,3.102035e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(22,2.546471e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(23,2.104132e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(24,1.730819e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(25,1.425749e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(26,1.176872e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(27,9.643199e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(28,7.934211e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(29,6.479053e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(30,5.304236e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(31,1.99208e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(2,307176.8);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(3,7192382);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(4,1.010533e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(5,9415580);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(6,9915135);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(7,1.070454e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(8,1.18608e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(9,1.339192e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(10,1.552568e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(11,1.845525e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(12,2.231963e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(13,2.733852e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(14,3.357209e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(15,4.116901e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(16,4.846723e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(17,4.034493e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(18,3.512399e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(19,3.144085e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(20,2.837453e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(21,2.574043e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(22,2.337182e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(23,2.129343e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(24,1.935232e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(25,1.759873e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(26,1.602277e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(27,1.452894e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(28,1.320224e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(29,1.194915e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(30,1.083323e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(31,2.113338e+07);
   VbbHcc_alljet_H_dR_stack_1->SetEntries(1.879626e+08);

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
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(2,150.6192);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(3,138048.6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(4,322393.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(5,469485.8);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(6,611242.6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(7,729629.7);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(8,845420.9);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(9,996946.8);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(10,1215164);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(11,1527666);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(12,1962045);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(13,2538201);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(14,3247346);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(15,4024968);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(16,4352776);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(17,2327896);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(18,1401678);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(19,910344.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(20,607349.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(21,411565.8);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(22,282829.3);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(23,196041.1);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(24,136812.2);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(25,96051.49);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(26,67810.47);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(27,47772.48);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(28,33591.74);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(29,23476.01);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(30,16348.52);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(31,33337.69);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(2,3.073285);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(3,94.38187);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(4,144.6442);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(5,174.3729);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(6,198.5225);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(7,216.605);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(8,233.1601);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(9,253.5639);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(10,280.7015);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(11,315.7527);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(12,359.0577);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(13,409.6746);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(14,464.7045);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(15,518.5914);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(16,540.0712);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(17,394.1224);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(18,304.9742);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(19,245.0238);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(20,199.4352);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(21,163.538);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(22,135.039);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(23,111.9768);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(24,93.2055);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(25,77.84386);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(26,65.23695);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(27,54.62781);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(28,45.71893);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(29,38.18801);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(30,31.83165);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(31,45.20443);
   VbbHcc_alljet_H_dR_stack_2->SetEntries(4.796548e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_alljet_16->Modified();
   H_dR_alljet_16->cd();
   H_dR_alljet_16->SetSelected(H_dR_alljet_16);
}
