#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.02704772,7.029799,0.19835);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1758102);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0);
   st_stack_114->SetMaximum(0.1758102);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Event/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.06560493);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.1120262);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.09250467);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.08723098);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.03671568);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.03454457);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.0217417);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.02028401);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.01240441);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.007617884);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.007742229);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.004582332);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.01425697);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.01506864);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.005927928);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.004234692);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.001706444);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.003997373);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,0.001955233);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,0.0009159819);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01159023);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.01478225);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.01285749);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.01277219);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.008850439);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.007990666);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.006122645);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.006620135);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.004736256);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.003822683);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.003942331);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.004871331);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.005126432);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.005357624);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.003422629);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.003014918);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.001706444);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.002826598);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,0.001955233);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,0.0009159819);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(331);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.01797251);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.03389631);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.04443764);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.03330705);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.02278039);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.009500295);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.007107678);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.005361271);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.003179607);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.003874895);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.003112919);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.003455503);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.002576092);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.003272909);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.001768929);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.001813597);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0005687143);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0004836283);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.0005822906);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0003644867);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.00208259);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.002811992);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.003273927);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.00284928);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.002329482);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.001499265);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.001296091);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.00114158);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.0008647187);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.0009577604);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.0008808976);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.0009284251);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.0007844644);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.0008911063);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0006724623);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0006883094);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.000333266);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0003419801);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0003436649);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0002577616);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(869);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
