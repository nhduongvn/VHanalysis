#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Fri Mar 10 11:27:14 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-0.4685321,1.171633,1.616094);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetLogy();
   Aplanarity_algo_all->SetLeftMargin(0.15709);
   Aplanarity_algo_all->SetRightMargin(0.1234783);
   Aplanarity_algo_all->SetBottomMargin(0.12);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(20.26715);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(0.6048157);
   st_stack_128->SetMaximum(25.56414);
   st_stack_128->SetDirectory(0);
   st_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_128->SetLineColor(ci);
   st_stack_128->GetXaxis()->SetTitle("Aplanarity");
   st_stack_128->GetXaxis()->SetRange(1,50);
   st_stack_128->GetXaxis()->SetLabelFont(42);
   st_stack_128->GetXaxis()->SetTitleOffset(1);
   st_stack_128->GetXaxis()->SetTitleFont(42);
   st_stack_128->GetYaxis()->SetTitle("Event/0.02");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,12.55618);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,8.847741);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,5.592561);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,3.86484);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,2.594815);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,1.842426);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,1.276572);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,0.9686701);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,0.6957238);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,0.5101274);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,0.4080826);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,0.2733259);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,0.219168);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,0.1139282);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,0.1024874);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,0.04634305);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,0.03312283);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(18,0.02180201);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,0.0132945);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(20,0.004277084);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(21,0.003189074);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(22,0.001931467);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,0.1901659);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,0.1520062);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,0.1193511);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,0.1000128);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,0.08078238);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,0.06761202);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,0.05878827);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,0.05051186);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,0.04210021);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,0.03609731);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,0.03212206);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,0.02654714);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,0.02550148);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,0.01644778);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,0.01629206);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,0.01045232);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,0.008547996);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(18,0.007032216);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,0.006146263);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(20,0.00305318);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(21,0.003189074);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(22,0.001931467);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(18048);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,4.26555);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,3.31503);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,2.215088);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,1.481398);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,0.9777241);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,0.7306113);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,0.4875009);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,0.3007167);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,0.232022);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,0.1522029);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,0.110276);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,0.07270892);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.05418549);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.02397578);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,0.01833113);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,0.00923219);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,0.006874146);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,0.00359045);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,0.002120378);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(20,0.0004819882);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(22,0.0004309483);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(24,0.0001574125);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,0.03785486);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,0.03321965);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,0.02755497);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,0.0224885);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,0.01785413);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,0.01541279);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,0.0126591);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,0.01008411);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.009206433);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.00723594);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.006052247);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.005454649);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.004137447);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.002790731);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,0.00244793);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,0.00177175);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,0.001618414);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,0.001073654);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,0.0008040608);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(20,0.0003521165);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(22,0.0004309483);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(24,0.0001574125);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(48229);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
