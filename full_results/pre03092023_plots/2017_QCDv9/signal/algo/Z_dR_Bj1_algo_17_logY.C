#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_17/Z_dR_Bj1_algo_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_17 = new TCanvas("Z_dR_Bj1_algo_17", "Z_dR_Bj1_algo_17",0,0,600,600);
   Z_dR_Bj1_algo_17->SetHighLightColor(2);
   Z_dR_Bj1_algo_17->Range(-1.310117,-0.08037127,7.029799,0.5893893);
   Z_dR_Bj1_algo_17->SetFillColor(0);
   Z_dR_Bj1_algo_17->SetFillStyle(4000);
   Z_dR_Bj1_algo_17->SetBorderMode(0);
   Z_dR_Bj1_algo_17->SetBorderSize(2);
   Z_dR_Bj1_algo_17->SetLogy();
   Z_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(-2.408717e+09);
   st_stack_118->SetMaximum(-0.5277046);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_118->GetXaxis()->SetRange(1,30);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Event/0.2");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetTitleSize(0.037);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.2034398);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.3680731);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.248126);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.1164193);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.04939);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.024695);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.02587095);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.01411143);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.005879762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.002351905);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.00470381);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.002351905);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.007055714);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.002351905);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.01546724);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.02080472);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.0170817);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.01170058);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.007621043);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.005388891);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.005515706);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.004073619);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.00262951);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.001663048);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.002351905);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.001663048);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.002880483);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.001663048);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,0.001175952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,0.0001544909);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.05175444);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.1294633);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.1048993);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.04078559);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.01220478);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.008033525);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.005098199);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.002317363);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.002935326);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.003089817);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.002780836);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.0016994);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.002162872);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.001235927);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.001081436);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.001081436);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.0007724543);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.0001544909);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.002827647);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.004472237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.004025666);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.002510179);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.001373145);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.001114049);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.0008874825);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.0005983406);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.0006734101);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.0006909042);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.0006554492);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.0005123882);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0005780519);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0004369662);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.0004087444);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0004087444);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0003454521);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_17->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->SetSelected(Z_dR_Bj1_algo_17);
}
