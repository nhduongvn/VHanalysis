#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,0.5766781,7.029799,2.442863);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetLogy();
   H_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_all->SetBottomMargin(0.12);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(146.3062);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",30,0,6);
   st_stack_112->SetMinimum(6.318591);
   st_stack_112->SetMaximum(180.4032);
   st_stack_112->SetDirectory(0);
   st_stack_112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_112->SetLineColor(ci);
   st_stack_112->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_112->GetXaxis()->SetRange(1,30);
   st_stack_112->GetXaxis()->SetLabelFont(42);
   st_stack_112->GetXaxis()->SetTitleOffset(1);
   st_stack_112->GetXaxis()->SetTitleFont(42);
   st_stack_112->GetYaxis()->SetTitle("Events/0.2");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,0.08437445);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,0.486416);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,0.7162141);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,1.131065);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,1.113243);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,0.9936841);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,0.8456035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,0.5823668);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,0.4248044);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,0.2809038);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,0.2231752);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,0.153295);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,0.1410194);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,0.1053718);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,0.1142037);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,0.05280717);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,0.01461279);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,0.01490566);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,0.002323422);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,0.01088077);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(25,0.001440646);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,0.0121508);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,0.03020375);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,0.03660239);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,0.04588338);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,0.04600991);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,0.04338663);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,0.04030145);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,0.0333889);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,0.02852357);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,0.02299825);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,0.02005532);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,0.01688353);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,0.01674884);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,0.0137828);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,0.01496184);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,0.01003642);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,0.005282258);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,0.005365535);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,0.002323422);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,0.004910395);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(25,0.001440646);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(4145);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,0.02959299);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,0.1320113);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,0.2469949);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,0.3319965);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,0.3091525);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,0.2289065);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,0.1705085);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,0.1299034);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,0.07299532);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,0.0513305);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,0.04395293);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,0.03677093);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,0.0338897);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,0.03076883);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,0.03131073);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,0.01329274);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,0.008111784);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,0.004763066);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,0.002481553);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,0.001597311);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,0.0004008118);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,0.0003441339);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(24,0.000180036);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(28,0.000180036);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,0.002807308);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,0.005893053);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,0.008109676);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,0.009404669);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,0.009157695);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,0.007869791);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,0.006751918);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,0.005970002);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,0.004437891);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,0.003649959);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,0.003434545);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,0.003109261);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,0.002978074);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,0.002784572);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,0.002855127);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,0.001829118);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,0.001463576);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,0.001074879);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,0.0008591399);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,0.0007228101);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,0.000284877);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,0.0003441339);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(24,0.000180036);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(28,0.000180036);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(7685);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
