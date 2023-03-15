#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.310117,-0.1315984,7.029799,0.9650553);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLogy();
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",30,0,6);
   st_stack_88->SetMinimum(-2.472486e+09);
   st_stack_88->SetMaximum(-0.829162);
   st_stack_88->SetDirectory(0);
   st_stack_88->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_88->SetLineColor(ci);
   st_stack_88->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_88->GetXaxis()->SetRange(1,31);
   st_stack_88->GetXaxis()->SetLabelFont(42);
   st_stack_88->GetXaxis()->SetTitleOffset(1);
   st_stack_88->GetXaxis()->SetTitleFont(42);
   st_stack_88->GetYaxis()->SetTitle("Event/0.2");
   st_stack_88->GetYaxis()->SetLabelFont(42);
   st_stack_88->GetYaxis()->SetTitleSize(0.037);
   st_stack_88->GetYaxis()->SetTitleFont(42);
   st_stack_88->GetZaxis()->SetLabelFont(42);
   st_stack_88->GetZaxis()->SetTitleOffset(1);
   st_stack_88->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_88);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,0.09645934);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,0.2631693);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,0.4425366);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,0.6051491);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,0.5012157);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,0.4356109);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,0.3624697);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,0.206035);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,0.1350744);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,0.09898725);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,0.0986823);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,0.08572054);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,0.05396794);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,0.0614994);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,0.0320755);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,0.01537829);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,0.004916594);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,0.001447523);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,0.0009222122);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,0.01340094);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,0.02275902);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,0.02895076);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,0.04426024);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,0.03069635);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,0.02865149);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,0.02617531);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,0.01974055);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,0.01554022);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,0.01339088);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,0.0133497);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,0.01260484);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,0.009408606);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,0.0106894);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,0.007532152);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,0.005580484);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,0.002895025);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,0.001447523);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,0.0009222122);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,0.02009182);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,0.06550057);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,0.1309826);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,0.209508);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,0.234382);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,0.1909139);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,0.1194862);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,0.06368443);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,0.04052263);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,0.03377183);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,0.02790336);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,0.02211756);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,0.023663);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,0.02028908);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,0.0111201);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,0.005927986);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,0.003688985);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,0.002725362);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,0.0006910504);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,0.0009124692);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,0.0001961976);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,0.002158473);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,0.003916923);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,0.005559245);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,0.007410995);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,0.008102182);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,0.006738672);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,0.005355845);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,0.00396412);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,0.003088376);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,0.002840154);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,0.002583948);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,0.002271681);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,0.002370908);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,0.002193546);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,0.001620388);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,0.001260146);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,0.0009472227);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,0.0008448309);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,0.0004187515);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,0.0004670683);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,0.0001961976);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
