#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_algo_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_18/Z_jetmass_noJEC_algo_18
//=========  (Mon Mar 27 11:09:52 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_noJEC_algo_18 = new TCanvas("Z_jetmass_noJEC_algo_18", "Z_jetmass_noJEC_algo_18",0,0,600,600);
   Z_jetmass_noJEC_algo_18->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_18->Range(-65.50587,-0.03484286,351.4899,0.2555143);
   Z_jetmass_noJEC_algo_18->SetFillColor(0);
   Z_jetmass_noJEC_algo_18->SetFillStyle(4000);
   Z_jetmass_noJEC_algo_18->SetBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetBorderSize(2);
   Z_jetmass_noJEC_algo_18->SetLeftMargin(0.15709);
   Z_jetmass_noJEC_algo_18->SetRightMargin(0.1234783);
   Z_jetmass_noJEC_algo_18->SetBottomMargin(0.12);
   Z_jetmass_noJEC_algo_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.2264786);
   
   TH1F *st_stack_187 = new TH1F("st_stack_187","",150,0,300);
   st_stack_187->SetMinimum(0);
   st_stack_187->SetMaximum(0.2264786);
   st_stack_187->SetDirectory(0);
   st_stack_187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_187->SetLineColor(ci);
   st_stack_187->GetXaxis()->SetTitle("b-jet mass [GeV]");
   st_stack_187->GetXaxis()->SetRange(1,150);
   st_stack_187->GetXaxis()->SetLabelFont(42);
   st_stack_187->GetXaxis()->SetTitleOffset(1);
   st_stack_187->GetXaxis()->SetTitleFont(42);
   st_stack_187->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_187->GetYaxis()->SetLabelFont(42);
   st_stack_187->GetYaxis()->SetTitleSize(0.037);
   st_stack_187->GetYaxis()->SetTitleFont(42);
   st_stack_187->GetZaxis()->SetLabelFont(42);
   st_stack_187->GetZaxis()->SetTitleOffset(1);
   st_stack_187->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_187);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(3,0.01025022);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(4,0.05347212);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(5,0.09712743);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(6,0.1380541);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(7,0.1375262);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(8,0.09751586);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(9,0.0737041);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(10,0.05663586);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(11,0.0409613);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(12,0.02690234);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(13,0.02204182);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(14,0.01598609);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(15,0.02525844);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(16,0.005466521);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(17,0.01473287);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(19,0.002434505);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(22,0.00820245);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(23,0.002958322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(25,0.002582708);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(37,0.002397148);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(52,0.002958322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(3,0.005222471);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(4,0.01237838);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(5,0.01669997);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(6,0.01896242);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(7,0.04328255);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(8,0.01564655);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(9,0.0138135);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(10,0.01189676);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(11,0.01167691);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(12,0.00871505);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(13,0.007482094);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(14,0.006222074);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(15,0.008546467);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(16,0.003957489);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(17,0.006628329);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(19,0.002434505);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(22,0.006593031);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(23,0.002958322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(25,0.002582708);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(37,0.002397148);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(52,0.002958322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetEntries(321);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(3,0.00150083);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(4,0.01804421);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(5,0.03756925);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(6,0.04992318);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(7,0.04530631);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(8,0.04140602);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(9,0.02296145);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(10,0.01871883);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(11,0.01439307);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(12,0.008451694);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(13,0.006169613);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(14,0.004884944);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(15,0.003254615);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(16,0.001866108);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(17,0.001509293);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(18,0.003792334);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(19,0.0006844484);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(20,0.0006262332);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(22,0.0003105083);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(23,0.001027353);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(25,0.000280877);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(34,0.0004374943);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(3,0.0007635495);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(4,0.002721989);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(5,0.003743655);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(6,0.004573928);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(7,0.00397519);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(8,0.003758315);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(9,0.002802383);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(10,0.002527851);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(11,0.002344361);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(12,0.001659992);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(13,0.001447363);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(14,0.001292954);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(15,0.00110088);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(16,0.0008430543);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(17,0.0007015522);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(18,0.002787223);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(19,0.0004846571);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(20,0.0004478256);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(22,0.0003105083);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(23,0.0006054358);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(25,0.000280877);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(34,0.0004374943);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetEntries(830);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_18->Modified();
   Z_jetmass_noJEC_algo_18->cd();
   Z_jetmass_noJEC_algo_18->SetSelected(Z_jetmass_noJEC_algo_18);
}
