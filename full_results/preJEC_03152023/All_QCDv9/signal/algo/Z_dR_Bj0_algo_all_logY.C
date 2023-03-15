#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Thu Mar  9 13:08:26 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,-0.1863088,7.029799,0.5935261);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLogy();
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.992578);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0.8077396);
   st_stack_116->SetMaximum(3.277499);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Event/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.4601829);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,1.851279);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,1.211828);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,0.5011068);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,0.1999051);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.1048754);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.04649514);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.03130735);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.02086032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.00659102);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,0.03138361);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,0.06292572);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,0.05132656);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,0.03290553);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,0.02030729);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,0.01481606);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,0.00969721);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,0.007981946);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,0.006393639);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,0.003893142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.09154379);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,0.632561);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,0.4791587);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,0.1715934);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.05314459);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.02307873);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.01147065);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.008473129);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.00510673);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.006121255);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.00265153);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.001729393);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.002005546);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.001671448);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.0007148681);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.0007148681);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,0.005069237);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,0.01333148);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,0.01162085);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,0.00694431);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,0.003839314);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,0.002560671);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,0.001794764);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,0.001527492);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,0.00119041);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,0.001297253);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,0.000860326);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,0.0006646676);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,0.0007628009);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,0.0006951415);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,0.0004195169);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,0.0004195169);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
