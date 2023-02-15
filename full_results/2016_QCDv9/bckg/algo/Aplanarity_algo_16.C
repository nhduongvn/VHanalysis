#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-496473.1,1.171633,3640803);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15709);
   Aplanarity_algo_16->SetRightMargin(0.1234783);
   Aplanarity_algo_16->SetBottomMargin(0.12);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3227075);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(0);
   st_stack_125->SetMaximum(3227075);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("Aplanarity");
   st_stack_125->GetXaxis()->SetRange(1,50);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetTitleOffset(1);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Events/0.02");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetTitleOffset(1);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2123906);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,875827.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,411792.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,186257.1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,122197.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,75906.45);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,44200.03);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,69212.74);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,36788.24);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,11897.11);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,2811.934);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,6782.414);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,2950.08);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,1097.785);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2271.419);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,60.88335);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,25.859);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,324.9408);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,93369.74);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,78474.23);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,50615.01);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,28994.37);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,25569.82);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,10068.47);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,7659.092);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,35637.44);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,25609.43);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,4312.417);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,1748.244);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,2684.829);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,1897.347);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,595.0218);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1917.313);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,37.34819);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,25.859);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,324.9408);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(33466);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,27477.53);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,19916.92);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,13412.63);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,9314.275);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,6653.123);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,4779.124);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3480.122);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,2568.424);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1901.669);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1368.711);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1001.306);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,707.3667);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,492.1427);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,353.0529);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,240.6877);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,150.2075);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,96.25909);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,55.02182);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,29.37953);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,15.54863);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,5.576219);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,2.432641);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,0.8576226);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.1136625);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,42.44781);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,36.55479);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,30.13413);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,25.18998);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,21.32556);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,18.09881);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,15.46759);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,13.29844);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,11.45684);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,9.724836);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,8.315483);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,7.005067);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,5.850724);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,4.959951);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,4.104422);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,3.235479);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,2.600403);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,1.964247);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.426874);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,1.045254);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.6300709);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.4122336);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2511118);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.08046391);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(1481664);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
