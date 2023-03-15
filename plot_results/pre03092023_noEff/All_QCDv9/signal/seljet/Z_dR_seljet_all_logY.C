#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_all_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_all/Z_dR_seljet_all
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_all = new TCanvas("Z_dR_seljet_all", "Z_dR_seljet_all",0,0,600,600);
   Z_dR_seljet_all->SetHighLightColor(2);
   Z_dR_seljet_all->Range(-1.310117,0.1234246,7.029799,4.324022);
   Z_dR_seljet_all->SetFillColor(0);
   Z_dR_seljet_all->SetFillStyle(4000);
   Z_dR_seljet_all->SetBorderMode(0);
   Z_dR_seljet_all->SetBorderSize(2);
   Z_dR_seljet_all->SetLogy();
   Z_dR_seljet_all->SetLeftMargin(0.15709);
   Z_dR_seljet_all->SetRightMargin(0.1234783);
   Z_dR_seljet_all->SetBottomMargin(0.12);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5194.748);
   
   TH1F *st_stack_276 = new TH1F("st_stack_276","",30,0,6);
   st_stack_276->SetMinimum(4.241274);
   st_stack_276->SetMaximum(8016.083);
   st_stack_276->SetDirectory(0);
   st_stack_276->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_276->SetLineColor(ci);
   st_stack_276->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_276->GetXaxis()->SetRange(1,30);
   st_stack_276->GetXaxis()->SetLabelFont(42);
   st_stack_276->GetXaxis()->SetTitleOffset(1);
   st_stack_276->GetXaxis()->SetTitleFont(42);
   st_stack_276->GetYaxis()->SetTitle("Events/0.2");
   st_stack_276->GetYaxis()->SetLabelFont(42);
   st_stack_276->GetYaxis()->SetTitleSize(0.037);
   st_stack_276->GetYaxis()->SetTitleFont(42);
   st_stack_276->GetZaxis()->SetLabelFont(42);
   st_stack_276->GetZaxis()->SetTitleOffset(1);
   st_stack_276->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_276);
   
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(2,0.01586188);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(3,7.767847);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(4,12.44945);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(5,14.59366);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(6,17.02312);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(7,19.36365);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(8,20.56449);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(9,22.37891);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(10,23.11083);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(11,24.71291);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(12,27.85819);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(13,31.45817);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(14,34.81146);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(15,38.23158);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(16,37.64143);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(17,16.27166);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(18,8.232312);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(19,5.052489);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(20,3.225788);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(21,2.103892);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(22,1.357367);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(23,0.83687);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(24,0.5357548);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(25,0.2900185);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(26,0.1409668);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(27,0.04190698);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(28,0.00956771);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(29,0.001714722);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(2,0.006584761);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(3,0.1405126);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(4,0.2103024);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(5,0.2202355);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(6,0.2133102);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(7,0.2337282);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(8,0.2294547);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(9,0.2448204);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(10,0.245537);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(11,0.2776488);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(12,0.2691143);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(13,0.2933533);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(14,0.3213726);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(15,0.3189425);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(16,0.3163167);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(17,0.2051343);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(18,0.1441909);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(19,0.1133523);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(20,0.08931133);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(21,0.07256972);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(22,0.05822173);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(23,0.04501543);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(24,0.03571609);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(25,0.02659486);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(26,0.01872469);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(27,0.009967299);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(28,0.004381202);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(29,0.001714722);
   VbbHcc_seljet_Z_dR_all_stack_1->SetEntries(163245);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(2,0.002884908);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(3,2.54626);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(4,4.625107);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(5,5.83862);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(6,7.16756);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(7,7.609175);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(8,7.860518);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(9,8.330111);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(10,8.968571);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(11,9.858818);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(12,10.68892);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(13,11.74532);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(14,12.76409);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(15,13.71591);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(16,13.57828);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(17,6.704695);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(18,3.783314);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(19,2.295187);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(20,1.456583);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(21,0.953735);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(22,0.618699);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(23,0.3758115);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(24,0.2311947);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(25,0.1180035);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(26,0.05249268);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(27,0.02706527);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(28,0.004809082);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(29,0.0005277748);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(2,0.0009009762);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(3,0.02998341);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(4,0.0398036);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(5,0.04393985);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(6,0.04975423);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(7,0.0509341);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(8,0.05168565);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(9,0.05524122);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(10,0.05530863);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(11,0.05975778);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(12,0.06003776);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(13,0.0631722);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(14,0.06609529);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(15,0.06883825);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(16,0.0675789);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(17,0.04983715);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(18,0.0358928);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(19,0.02758088);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(20,0.02205364);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(21,0.01791448);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(22,0.01423327);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(23,0.01101938);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(24,0.008903105);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(25,0.006153294);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(26,0.004024542);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(27,0.002945872);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(28,0.001227149);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(29,0.0003958865);
   VbbHcc_seljet_Z_dR_all_stack_2->SetEntries(467662);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_all->Modified();
   Z_dR_seljet_all->cd();
   Z_dR_seljet_all->SetSelected(Z_dR_seljet_all);
}
