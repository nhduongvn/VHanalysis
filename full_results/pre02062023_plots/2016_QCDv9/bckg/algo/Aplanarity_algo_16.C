#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-681312.5,1.171633,4996291);
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
   st->SetMaximum(4428531);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(0);
   st_stack_125->SetMaximum(4428531);
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
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2923517);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,1227146);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,590504.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,313252.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,243331.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,125335.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,62085.24);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,54823.18);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,29495.18);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,31526.85);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,23421.11);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,6004.663);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,2410.389);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,1155.926);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2041.296);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,52.45584);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,358.0221);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,324.1869);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,128921.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,97280.67);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,66388.16);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,47012.54);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,48379.47);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,30920.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,18310.26);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,24606.46);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,12766.84);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,19969.57);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,17199.29);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,2387.958);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,1667.615);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,594.9331);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1703.884);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,37.11344);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,358.0221);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,324.1869);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(33722);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,28837.03);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,20944.96);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,14048.2);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,9759.381);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,6974.446);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,4977.384);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3637.569);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,2669.927);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1986.165);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1427.327);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1035.192);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,732.4375);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,516.8909);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,366.1737);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,249.3009);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,156.3209);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,99.7797);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,58.73304);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,30.02221);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,15.8439);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,6.016519);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,2.626591);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,0.7905781);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.236538);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,43.35518);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,37.44918);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,30.82821);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,25.78846);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,21.84857);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,18.49072);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,15.83128);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,13.57446);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,11.73418);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,9.951002);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,8.473941);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,7.140287);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,6.016076);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,5.066841);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,4.190983);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,3.306064);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,2.654157);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,2.033493);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.44511);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,1.057702);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.6546005);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.430405);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2442793);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.1203772);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(1587706);

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
