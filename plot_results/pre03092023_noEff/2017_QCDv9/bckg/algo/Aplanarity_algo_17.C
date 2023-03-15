#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,-141269.8,1.171633,1035978);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(918253.5);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(0);
   st_stack_126->SetMaximum(918253.5);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Events/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,592459.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,308982.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,125378);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,65462.35);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,59650.43);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,27057.73);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,12121.34);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,6982.68);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,7705.618);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,3215.67);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,3255.086);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,3261.954);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,510.1489);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,337.2441);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,337.6604);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,36.81141);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,44.66338);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,320.0472);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,34589.25);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,33758.17);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,9149.322);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,6526.301);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,19846.38);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,4203.402);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,2226.302);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,1766.156);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,2343.441);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,1743.983);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,1760.077);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,2087.129);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,371.4217);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,285.0027);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,319.4765);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,28.77101);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,32.41512);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,320.0472);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(24778);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,19709.68);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,14221.79);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,9653.441);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,6681.005);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,4790.326);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,3503.018);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,2584.46);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1904.264);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1415.057);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1041.608);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,766.2487);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,565.2044);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,397.9064);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,273.3788);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,185.8627);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,121.0244);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,74.63261);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,45.87731);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,28.65036);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,12.96302);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,6.579166);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,2.517247);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,0.6384753);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.08651424);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,37.54846);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,32.32472);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,26.81199);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,22.3685);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,19.00555);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,16.28068);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,14.02364);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,12.04256);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,10.3967);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,8.949418);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,7.665982);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,6.605456);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,5.546328);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,4.586222);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,3.794611);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,3.075238);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,2.409323);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,1.890743);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.510608);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,0.9829533);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.7277916);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.4356284);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2297384);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.08651424);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(1015007);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
