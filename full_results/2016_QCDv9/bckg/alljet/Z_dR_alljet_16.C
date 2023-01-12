#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_16()
{
//=========Macro generated from canvas: Z_dR_alljet_16/Z_dR_alljet_16
//=========  (Mon Dec 19 11:11:48 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_16 = new TCanvas("Z_dR_alljet_16", "Z_dR_alljet_16",0,0,600,600);
   Z_dR_alljet_16->SetHighLightColor(2);
   Z_dR_alljet_16->Range(-1.310117,-1.098562e+10,7.029799,8.056124e+10);
   Z_dR_alljet_16->SetFillColor(0);
   Z_dR_alljet_16->SetFillStyle(4000);
   Z_dR_alljet_16->SetBorderMode(0);
   Z_dR_alljet_16->SetBorderSize(2);
   Z_dR_alljet_16->SetLeftMargin(0.15709);
   Z_dR_alljet_16->SetRightMargin(0.1234783);
   Z_dR_alljet_16->SetBottomMargin(0.12);
   Z_dR_alljet_16->SetFrameFillStyle(1000);
   Z_dR_alljet_16->SetFrameBorderMode(0);
   Z_dR_alljet_16->SetFrameFillStyle(1000);
   Z_dR_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.140655e+10);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",30,0,6);
   st_stack_185->SetMinimum(0);
   st_stack_185->SetMaximum(7.140655e+10);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_185->GetXaxis()->SetRange(1,30);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Events/0.2");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_alljet_Z_dR_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(2,2.425691e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(3,1.029687e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(4,2.229887e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(5,1.839582e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(6,1.963281e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(7,2.153014e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(8,2.352342e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(9,2.584594e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(10,2.834407e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(11,3.111629e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(12,3.423145e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(13,3.754716e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(14,4.124456e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(15,4.525179e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(16,4.760202e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(17,3.731285e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(18,3.179469e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(19,2.818992e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(20,2.544703e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(21,2.312081e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(22,2.111527e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(23,1.924775e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(24,1.759893e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(25,1.607776e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(26,1.476094e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(27,1.347971e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(28,1.229568e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(29,1.126696e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(30,1.025735e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(31,6.16244e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(2,643558.7);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(3,1.298767e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(4,1.935756e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(5,1.760427e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(6,1.822064e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(7,1.91116e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(8,2.00021e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(9,2.09854e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(10,2.198804e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(11,2.304415e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(12,2.417842e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(13,2.532524e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(14,2.655233e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(15,2.782711e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(16,2.855932e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(17,2.531835e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(18,2.339857e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(19,2.206159e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(20,2.09901e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(21,2.003538e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(22,1.916953e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(23,1.832328e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(24,1.754195e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(25,1.678627e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(26,1.610526e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(27,1.540735e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(28,1.473195e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(29,1.411753e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(30,1.348283e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(31,3.319827e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetEntries(2.046832e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(2,579.6804);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(3,422767.9);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(4,832884.6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(5,1013518);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(6,1252579);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(7,1465635);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(8,1640414);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(9,1781336);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(10,1897404);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(11,2001398);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(12,2103896);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(13,2205764);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(14,2306921);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(15,2403172);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(16,2346072);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(17,1437414);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(18,993530);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(19,736705.5);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(20,563853.4);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(21,440915.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(22,348842.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(23,278590.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(24,223560.4);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(25,179672.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(26,144694.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(27,116112.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(28,92958.53);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(29,73917.05);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(30,58430.32);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(31,190431.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(2,6.328765);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(3,173.4023);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(4,244.5262);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(5,271.1628);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(6,301.9833);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(7,326.6692);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(8,345.3174);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(9,359.4341);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(10,370.5977);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(11,380.4938);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(12,390.2794);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(13,399.9929);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(14,409.5847);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(15,418.6234);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(16,413.7734);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(17,321.8294);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(18,265.924);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(19,227.6825);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(20,198.1189);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(21,174.3009);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(22,154.246);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(23,137.2201);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(24,122.3336);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(25,109.2047);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(26,97.61465);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(27,87.1377);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(28,77.67813);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(29,68.96322);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(30,61.11541);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(31,108.692);
   VbbHcc_alljet_Z_dR_stack_2->SetEntries(4.61215e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_1","QCD","F");

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
   Z_dR_alljet_16->Modified();
   Z_dR_alljet_16->cd();
   Z_dR_alljet_16->SetSelected(Z_dR_alljet_16);
}
