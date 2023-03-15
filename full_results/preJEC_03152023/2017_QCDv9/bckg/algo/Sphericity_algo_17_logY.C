#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2183529,-0.2914227,1.171633,6.285827);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15709);
   Sphericity_algo_17->SetRightMargin(0.1234783);
   Sphericity_algo_17->SetBottomMargin(0.12);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(226977.5);
   
   TH1F *st_stack_122 = new TH1F("st_stack_122","",25,0,1);
   st_stack_122->SetMinimum(3.146642);
   st_stack_122->SetMaximum(424719.5);
   st_stack_122->SetDirectory(0);
   st_stack_122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_122->SetLineColor(ci);
   st_stack_122->GetXaxis()->SetTitle("Sphericity");
   st_stack_122->GetXaxis()->SetRange(1,25);
   st_stack_122->GetXaxis()->SetLabelFont(42);
   st_stack_122->GetXaxis()->SetTitleOffset(1);
   st_stack_122->GetXaxis()->SetTitleFont(42);
   st_stack_122->GetYaxis()->SetTitle("Event/0.04");
   st_stack_122->GetYaxis()->SetLabelFont(42);
   st_stack_122->GetYaxis()->SetTitleSize(0.037);
   st_stack_122->GetYaxis()->SetTitleFont(42);
   st_stack_122->GetZaxis()->SetLabelFont(42);
   st_stack_122->GetZaxis()->SetTitleOffset(1);
   st_stack_122->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_122);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,61823.25);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,159503.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,182273.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,128521.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,127632.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,136438.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,77433.29);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,63136.22);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,65778.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,47072.59);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,35730.49);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,27198.94);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,24324.36);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,23878.65);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,19554.55);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,10426.39);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,6564.761);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,6868.626);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,3120.436);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,466.5178);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(21,11584.33);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(22,324.0702);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,4912.374);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,8525.674);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,22929.09);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,8682.166);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,24210.22);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,25951.87);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,6513.496);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,6127.265);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,19277.66);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,5423.397);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,4412.382);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,3720.245);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,3787.123);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,3470.331);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,3450.425);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,2084.488);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,1220.11);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,1437.468);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,901.545);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,385.2296);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(21,11514.85);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(22,320.0725);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(25364);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,1596.476);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,4718.315);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,6117.443);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,6234.546);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,5907.649);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,5476.643);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,5017.656);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,4613.084);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,4178.862);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,3824.764);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,3488.555);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,3128.409);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,2852.167);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,2542.405);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2215.937);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,1891.215);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1537.786);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1151.376);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,779.373);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,414.9215);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,191.6823);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,71.27414);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(23,18.87222);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(24,2.768383);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(25,0.08646642);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,10.01986);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,17.73025);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,20.65925);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,21.04924);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,20.60418);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,19.90918);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,19.07879);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,18.32121);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,17.46746);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,16.72086);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,16.0059);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,15.17321);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,14.5071);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,13.73503);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,12.81729);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,11.86952);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,10.71122);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,9.272513);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,7.653548);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,5.602357);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,3.819051);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,2.337117);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(23,1.210999);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(24,0.4662451);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(25,0.08646642);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(1058517);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
