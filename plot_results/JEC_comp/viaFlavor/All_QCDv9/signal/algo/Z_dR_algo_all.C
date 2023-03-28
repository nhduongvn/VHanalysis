#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-0.08569466,7.029799,0.6284275);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetLeftMargin(0.15709);
   Z_dR_algo_all->SetRightMargin(0.1234783);
   Z_dR_algo_all->SetBottomMargin(0.12);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.5570153);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0);
   st_stack_116->SetMaximum(0.5570153);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Event/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,0.2234079);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,0.310755);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,0.3298522);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,0.2799585);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,0.173087);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,0.0971412);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,0.06180341);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,0.0580054);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,0.02266548);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,0.02084222);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,0.02469268);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,0.02970307);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,0.02628183);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,0.02900685);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,0.02581809);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,0.02110991);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,0.008200907);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,0.006734144);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,0.001955233);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,0.0009159819);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,0.02395913);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,0.02825173);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,0.02851253);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,0.04686897);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,0.02176011);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,0.01525529);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,0.01188959);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,0.01212493);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,0.007001577);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,0.007729874);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,0.00757619);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,0.009744895);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,0.007622865);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,0.00824413);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,0.008398459);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,0.007567342);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,0.004899769);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,0.003934409);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,0.001955233);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,0.0009159819);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,0.05493404);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,0.100975);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,0.1324705);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,0.1016724);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,0.06634382);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,0.03014169);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,0.02113564);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,0.01456758);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,0.01057182);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,0.0114628);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,0.01413643);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,0.009407388);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,0.006823452);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,0.007638973);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,0.006519832);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,0.005244026);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,0.001935829);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,0.00174311);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,0.001228723);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,0.001372999);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,0.0007025094);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,0.004889324);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,0.005921726);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,0.006526828);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,0.00578323);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,0.004613374);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,0.003121196);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,0.002666469);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,0.002202739);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,0.00183118);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,0.001939581);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,0.002243589);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,0.00173219);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,0.00140864);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,0.001551253);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,0.001502365);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,0.001294222);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,0.000766385);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,0.0006785652);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,0.0005719367);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,0.0006508969);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,0.0004992961);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(2016);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
