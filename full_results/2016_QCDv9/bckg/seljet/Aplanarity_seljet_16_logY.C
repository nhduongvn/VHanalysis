#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_16_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_16/Aplanarity_seljet_16
//=========  (Tue Feb 14 16:02:06 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_16 = new TCanvas("Aplanarity_seljet_16", "Aplanarity_seljet_16",0,0,600,600);
   Aplanarity_seljet_16->SetHighLightColor(2);
   Aplanarity_seljet_16->Range(-0.2183529,-2.690112,1.171633,14.01239);
   Aplanarity_seljet_16->SetFillColor(0);
   Aplanarity_seljet_16->SetFillStyle(4000);
   Aplanarity_seljet_16->SetBorderMode(0);
   Aplanarity_seljet_16->SetBorderSize(2);
   Aplanarity_seljet_16->SetLogy();
   Aplanarity_seljet_16->SetLeftMargin(0.15709);
   Aplanarity_seljet_16->SetRightMargin(0.1234783);
   Aplanarity_seljet_16->SetBottomMargin(0.12);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.409077);
   st->SetMaximum(6.594323e+11);
   
   TH1F *st_stack_317 = new TH1F("st_stack_317","",50,0,1);
   st_stack_317->SetMinimum(0.2061525);
   st_stack_317->SetMaximum(2.198578e+12);
   st_stack_317->SetDirectory(0);
   st_stack_317->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_317->SetLineColor(ci);
   st_stack_317->GetXaxis()->SetTitle("Aplanarity");
   st_stack_317->GetXaxis()->SetRange(1,50);
   st_stack_317->GetXaxis()->SetLabelFont(42);
   st_stack_317->GetXaxis()->SetTitleOffset(1);
   st_stack_317->GetXaxis()->SetTitleFont(42);
   st_stack_317->GetYaxis()->SetTitle("Events/0.02");
   st_stack_317->GetYaxis()->SetLabelFont(42);
   st_stack_317->GetYaxis()->SetTitleSize(0.037);
   st_stack_317->GetYaxis()->SetTitleFont(42);
   st_stack_317->GetZaxis()->SetLabelFont(42);
   st_stack_317->GetZaxis()->SetTitleOffset(1);
   st_stack_317->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_317);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,1407.964);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,6.589179e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,3.182454e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,1.643202e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,9.201877e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,5.50241e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,3.463611e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,2.227326e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,1.459614e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,9.574525e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,6.557097e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,4.365826e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,2.883167e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,1.902862e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,1.256819e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,7329137);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,4548987);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,2906670);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,1318703);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,763223.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,385288.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,181437.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,33002.25);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,43139.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,1806.402);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,667.5162);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,6656625);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,5026553);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,3710777);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,2787393);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,2164759);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,1732128);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,1402165);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,1132214);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,905263.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,770023.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,625026.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,508729.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,410093.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,334545.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,247851.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,196470.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,166342.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,91937.55);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,62648.12);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,50745.64);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,42796.01);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,6052.853);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,27113.89);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,1757.448);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(6.330104e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,1.112588);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,5143361);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,3983386);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,2695463);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,1848253);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,1294750);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,922766.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,663724.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,480198.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,347643.8);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,250727.8);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,179356.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,127087);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,88680.96);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,60678.93);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,40384.49);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,26109.86);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,16300.24);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,9622.7);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,5283.594);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,2682.577);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,1181.944);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,437.2022);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,118.2784);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,17.53625);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.4281609);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.2786851);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,591.2508);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,523.8097);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,431.9288);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,358.0493);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,299.8828);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,253.3074);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,214.9139);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,182.8518);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,155.6241);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,132.1906);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,111.8323);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,94.16978);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,78.66945);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,65.08789);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,53.10771);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,42.70822);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,33.74893);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,25.93649);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,19.22453);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,13.70132);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,9.094093);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,5.537146);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,2.876249);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,1.110667);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.1780135);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(2.795724e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_seljet_16->Modified();
   Aplanarity_seljet_16->cd();
   Aplanarity_seljet_16->SetSelected(Aplanarity_seljet_16);
}
