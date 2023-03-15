#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Feb 16 10:35:35 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-652035.6,1.171633,4781594);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
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
   st->SetMaximum(4238231);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(0);
   st_stack_189->SetMaximum(4238231);
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
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,2587025);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1291322);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,595904.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,368090.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,227605.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,130910.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,72007.11);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,56290.66);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,38678.64);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,24800.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,13589.88);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,7512.236);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,8133.443);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,3919.053);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,3312.215);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,1604.605);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,139.3913);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,1430.63);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,65.56338);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,327.8852);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,34501.87);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,54595.67);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,19410.73);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,28308.15);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,25318.97);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,8915.486);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,5888.467);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,6143.145);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,5093.575);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,4693.833);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,3036.178);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,1303.268);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,2325.84);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,977.4273);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,961.4439);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,646.3869);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,48.21281);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,1334.365);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,31.85146);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,314.1936);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(246965);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.07291655);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,238462);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,169855);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,112777.9);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,76611.84);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,53327.71);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,37982.83);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,27142.47);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,19657.71);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,14253.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,10275.3);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,7376.39);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,5222.671);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,3659.396);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,2514.573);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,1675.229);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,1097.904);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,672.5093);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,406.4346);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,218.6464);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,111.3566);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,49.465);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,19.25517);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,4.362451);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,0.4049785);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.06202932);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,130.4475);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,110.538);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,90.2367);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,74.46617);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,62.19385);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,52.52685);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,44.42113);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,37.81292);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,32.22103);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,27.36483);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,23.19313);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,19.52544);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,16.34203);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,13.54968);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,11.07299);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,8.958731);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,7.01761);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,5.448037);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,4.001396);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,2.859511);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,1.907887);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,1.179441);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.5685881);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.1583843);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(1.151209e+07);

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
