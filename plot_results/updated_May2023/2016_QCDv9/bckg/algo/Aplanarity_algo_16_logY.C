#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu May 25 11:56:11 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-0.4337433,1.171633,7.001577);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(909510.9);
   
   TH1F *st_stack_40 = new TH1F("st_stack_40","",50,0,1);
   st_stack_40->SetMinimum(2.874055);
   st_stack_40->SetMaximum(1811529);
   st_stack_40->SetDirectory(0);
   st_stack_40->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_40->SetLineColor(ci);
   st_stack_40->GetXaxis()->SetTitle("Aplanarity");
   st_stack_40->GetXaxis()->SetRange(1,50);
   st_stack_40->GetXaxis()->SetLabelFont(42);
   st_stack_40->GetXaxis()->SetTitleOffset(1);
   st_stack_40->GetXaxis()->SetTitleFont(42);
   st_stack_40->GetYaxis()->SetTitle("Event/0.02");
   st_stack_40->GetYaxis()->SetLabelFont(42);
   st_stack_40->GetYaxis()->SetTitleSize(0.037);
   st_stack_40->GetYaxis()->SetTitleFont(42);
   st_stack_40->GetZaxis()->SetLabelFont(42);
   st_stack_40->GetZaxis()->SetTitleOffset(1);
   st_stack_40->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_40);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,717041.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,107987.1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,22986.57);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,2904.406);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,390.025);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,346.4103);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,21.20928);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,6.579398);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,27663.06);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,23592.04);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,4650.113);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,842.9939);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,284.2425);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,326.5516);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,21.20928);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,6.579398);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(22576);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,37852.73);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,5908.457);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,1394.997);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,427.7239);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,150.1135);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,62.12249);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,26.47059);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,11.79366);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,6.955971);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,3.987505);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1.835969);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,1.387827);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.7767628);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.1880898);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.2714316);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.04007869);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,49.91048);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,19.73631);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,9.535425);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,5.257979);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,3.095322);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.954553);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,1.261337);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.8339768);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.6323507);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4757135);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3224392);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2814454);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.2146686);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.09485527);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.12241);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.04007869);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(746055);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
