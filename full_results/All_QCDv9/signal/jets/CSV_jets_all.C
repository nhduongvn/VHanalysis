#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all()
{
//=========Macro generated from canvas: CSV_jets_all/CSV_jets_all
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all = new TCanvas("CSV_jets_all", "CSV_jets_all",0,0,600,600);
   CSV_jets_all->SetHighLightColor(2);
   CSV_jets_all->Range(-0.2183529,-1240.129,1.171633,9094.279);
   CSV_jets_all->SetFillColor(0);
   CSV_jets_all->SetFillStyle(4000);
   CSV_jets_all->SetBorderMode(0);
   CSV_jets_all->SetBorderSize(2);
   CSV_jets_all->SetLeftMargin(0.15709);
   CSV_jets_all->SetRightMargin(0.1234783);
   CSV_jets_all->SetBottomMargin(0.12);
   CSV_jets_all->SetFrameFillStyle(1000);
   CSV_jets_all->SetFrameBorderMode(0);
   CSV_jets_all->SetFrameFillStyle(1000);
   CSV_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8060.838);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",20,0,1);
   st_stack_8->SetMinimum(0);
   st_stack_8->SetMaximum(8060.838);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_8->GetXaxis()->SetRange(1,20);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/0.05");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_jets_CSV_all_stack_1 = new TH1D("VbbHcc_jets_CSV_all_stack_1","",20,0,1);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(1,4506.01);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(2,728.7723);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(3,360.9856);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(4,237.2473);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(5,176.9996);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(6,141.7572);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(7,116.8336);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(8,98.52255);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(9,79.91372);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(10,71.27961);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(11,64.52785);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(12,56.97627);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(13,49.53199);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(14,45.62427);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(15,42.42897);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(16,42.25942);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(17,40.46767);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(18,41.69583);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(19,54.86796);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(20,273.9296);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(1,3.12082);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(2,1.247836);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(3,0.8800552);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(4,0.7145787);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(5,0.6189852);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(6,0.5533412);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(7,0.5027715);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(8,0.4611126);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(9,0.4145311);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(10,0.3925377);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(11,0.3727078);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(12,0.3515401);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(13,0.326199);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(14,0.314612);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(15,0.3008872);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(16,0.3023278);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(17,0.2962585);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(18,0.3003198);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(19,0.3438566);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(20,0.7745356);
   VbbHcc_jets_CSV_all_stack_1->SetEntries(4282681);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CSV_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_all_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_all_stack_2 = new TH1D("VbbHcc_jets_CSV_all_stack_2","",20,0,1);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(1,867.8825);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(2,129.3297);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(3,62.26855);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(4,40.78946);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(5,30.3638);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(6,24.30986);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(7,19.69449);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(8,16.53548);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(9,13.78792);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(10,11.99189);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(11,11.07471);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(12,9.838554);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(13,8.589047);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(14,7.980828);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(15,7.578876);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(16,7.603883);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(17,7.343367);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(18,7.765094);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(19,10.39079);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(20,56.40444);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(1,0.5043974);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(2,0.1928879);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(3,0.1340461);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(4,0.1089744);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(5,0.09367265);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(6,0.08384435);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(7,0.07572368);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(8,0.06928872);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(9,0.06329413);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(10,0.05889447);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(11,0.05641901);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(12,0.05330663);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(13,0.04995437);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(14,0.04794517);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(15,0.04681271);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(16,0.04679795);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(17,0.04596274);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(18,0.04734161);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(19,0.05555305);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(20,0.1292755);
   VbbHcc_jets_CSV_all_stack_2->SetEntries(5625881);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CSV_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_jets_CSV_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all->Modified();
   CSV_jets_all->cd();
   CSV_jets_all->SetSelected(CSV_jets_all);
}
