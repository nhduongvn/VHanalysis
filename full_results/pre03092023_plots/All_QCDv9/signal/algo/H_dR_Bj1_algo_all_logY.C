#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,-0.1613596,7.029799,1.183304);
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",30,0,6);
   st_stack_112->SetMinimum(-2.49985e+09);
   st_stack_112->SetMaximum(-0.9989889);
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
   st_stack_112->GetYaxis()->SetTitle("Event/0.2");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,0.1164754);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,0.4933152);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,0.7416919);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,0.6674475);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,0.4885477);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,0.2444078);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,0.1499147);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,0.09507429);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,0.06214109);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,0.06497203);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,0.04722128);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,0.04349516);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,0.03310552);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,0.02614871);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,0.02536993);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,0.0107082);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,0.007158958);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,0.004590648);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,0.00375139);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,0.001183079);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,0.01369117);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,0.02818798);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,0.03461637);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,0.03263869);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,0.02805608);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,0.01975328);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,0.01547272);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,0.01252172);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,0.009690521);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,0.01034417);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,0.008527036);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,0.008264255);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,0.00705721);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,0.006308679);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,0.006647769);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,0.004135258);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,0.003591842);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,0.002684295);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,0.002663751);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,0.001183079);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(2165);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,0.02406157);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,0.1323284);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,0.2572009);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,0.2650503);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,0.1607774);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,0.08805932);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,0.0460351);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,0.0279383);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,0.02412998);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,0.01720139);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,0.01519075);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,0.01159039);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,0.01253115);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,0.01038267);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,0.0120728);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,0.005247107);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,0.002770183);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,0.001674507);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,0.001812086);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,0.0006041125);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,0.0001554272);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,0.002248579);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,0.005226045);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,0.007342194);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,0.00749943);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,0.005836071);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,0.004284154);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,0.003124226);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,0.002400045);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,0.002274018);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,0.001889831);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,0.001762726);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,0.001581828);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,0.001637153);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,0.001470941);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,0.001638714);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,0.001072364);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,0.0007830919);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,0.0005675443);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,0.0006472163);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,0.0003532943);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,0.0001554272);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(5547);

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
