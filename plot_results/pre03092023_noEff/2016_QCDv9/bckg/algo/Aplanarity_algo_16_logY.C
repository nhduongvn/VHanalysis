#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Feb 16 10:37:40 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-0.8102123,1.171633,8.981186);
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
   st->SetMaximum(4.317588e+07);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(2.31609);
   st_stack_125->SetMaximum(1.004723e+08);
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
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,417995.8);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,227664);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,86653.91);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,43022.91);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,28406.67);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,17830.08);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,9572.524);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,7713.805);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,4834.495);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,3171.04);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,684.882);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,1214.681);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,784.729);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,748.4616);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,376.3352);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,63.29771);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,27.58634);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,314.0145);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,15956.54);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,33222.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,8019.168);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,6307.073);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,4826.594);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,4044.691);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,3070.553);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,2853.535);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,2062.564);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,2203.981);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,331.0804);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,581.6344);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,459.884);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,481.8734);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,360.3697);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,39.43097);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,27.58634);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,314.0145);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(21684);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,13762.96);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,9644.886);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,6418.292);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,4433.54);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,3170.669);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,2277.752);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,1661.159);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1233.214);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,925.3085);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,675.6718);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,492.058);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,356.2317);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,250.9226);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,180.1113);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,123.1727);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,79.08609);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,48.4785);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,29.65716);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,15.63874);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,8.195074);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,3.072637);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,1.211551);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,0.6203233);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.06176663);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,30.59051);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,25.87532);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,21.20489);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,17.68464);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,14.99404);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,12.72301);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,10.88357);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,9.390421);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,8.144266);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,6.96805);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,5.946182);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,5.065798);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,4.259313);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,3.613522);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,2.990754);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,2.394006);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,1.877331);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,1.465799);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.066523);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,0.7768745);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.4693315);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.2899361);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2206496);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.06176663);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(695813);

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
