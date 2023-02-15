#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Feb 14 16:02:04 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-1.143695,1.171633,10.82253);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.600176e+09);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(1.959983);
   st_stack_189->SetMaximum(4.225799e+09);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Events/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1.533029e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,7506289);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,3516524);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,1875572);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,1194312);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,673034.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,567245.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,416630.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,206423.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,141582.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,62095.74);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,69890.14);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,81215.72);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,45995.59);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,12049.26);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,7887.239);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,4685.077);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,2610.893);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,2021.658);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,359.6592);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,46.92957);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,232218.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,228247.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,138405.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,104301.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,83590.61);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,50062.17);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,66318.72);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,66798.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,38060.53);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,21928.01);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,7896.678);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,24697.52);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,34706.79);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,26606.02);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,3135.623);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,2796.768);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,2242.995);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,1671.755);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,1870.686);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,325.4405);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,31.06349);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(471796);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.07030749);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,671475);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,464403.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,307266.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,209898);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,146834.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,104641.9);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,75287.38);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,54422.63);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,39335.73);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,28419.21);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,20345.07);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,14406.22);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,10060.44);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,6909.545);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,4609.583);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,2974.584);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,1865.461);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,1102.02);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,606.097);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,299.5608);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,134.9068);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,47.34741);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,13.83481);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,1.776264);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.1427624);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.05980982);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,216.5447);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,180.9121);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,147.4149);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,121.9714);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,102.0942);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,86.24713);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,73.18813);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,62.2325);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,52.93529);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,45.00019);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,38.09377);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,32.06536);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,26.80394);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,22.21165);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,18.14898);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,14.57334);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,11.55813);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,8.87629);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,6.589354);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,4.626622);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,3.108223);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,1.840971);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,1.000366);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.3573688);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.1013675);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(3.245983e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
