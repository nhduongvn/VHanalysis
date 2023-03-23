#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_signal_17()
{
//=========Macro generated from canvas: Aplanarity_signal_17/Aplanarity_signal_17
//=========  (Thu Mar 23 11:52:36 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_signal_17 = new TCanvas("Aplanarity_signal_17", "Aplanarity_signal_17",0,0,600,600);
   Aplanarity_signal_17->SetHighLightColor(2);
   Aplanarity_signal_17->Range(-0.2183529,-20.13684,1.171633,147.6702);
   Aplanarity_signal_17->SetFillColor(0);
   Aplanarity_signal_17->SetFillStyle(4000);
   Aplanarity_signal_17->SetBorderMode(0);
   Aplanarity_signal_17->SetBorderSize(2);
   Aplanarity_signal_17->SetLeftMargin(0.15709);
   Aplanarity_signal_17->SetRightMargin(0.1234783);
   Aplanarity_signal_17->SetBottomMargin(0.12);
   Aplanarity_signal_17->SetFrameFillStyle(1000);
   Aplanarity_signal_17->SetFrameBorderMode(0);
   Aplanarity_signal_17->SetFrameFillStyle(1000);
   Aplanarity_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(130.8895);
   
   TH1F *st_stack_69 = new TH1F("st_stack_69","",50,0,1);
   st_stack_69->SetMinimum(0);
   st_stack_69->SetMaximum(130.8895);
   st_stack_69->SetDirectory(0);
   st_stack_69->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_69->SetLineColor(ci);
   st_stack_69->GetXaxis()->SetTitle("Aplanarity");
   st_stack_69->GetXaxis()->SetRange(1,50);
   st_stack_69->GetXaxis()->SetLabelFont(42);
   st_stack_69->GetXaxis()->SetTitleOffset(1);
   st_stack_69->GetXaxis()->SetTitleFont(42);
   st_stack_69->GetYaxis()->SetTitle("Event/0.02");
   st_stack_69->GetYaxis()->SetLabelFont(42);
   st_stack_69->GetYaxis()->SetTitleSize(0.037);
   st_stack_69->GetYaxis()->SetTitleFont(42);
   st_stack_69->GetZaxis()->SetLabelFont(42);
   st_stack_69->GetZaxis()->SetTitleOffset(1);
   st_stack_69->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_69);
   
   
   TH1D *VbbHcc_MC_Aplanarity_stack_1 = new TH1D("VbbHcc_MC_Aplanarity_stack_1","",50,0,1);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(1,97.98586);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(2,28.23948);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(3,16.15493);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(4,10.50864);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(5,7.484371);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(6,5.366274);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(7,4.03484);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(8,2.80158);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(9,2.087163);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(10,1.501562);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(11,1.178356);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(12,0.8648585);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(13,0.5905512);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(14,0.3940437);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(15,0.2394071);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(16,0.1613995);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(17,0.1113512);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(18,0.05053924);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(19,0.03212937);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(20,0.02035439);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(21,0.009207636);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(22,0.001666007);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(1,0.4391506);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(2,0.2345368);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(3,0.1767882);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(4,0.1425494);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(5,0.1197034);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(6,0.10169);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(7,0.08794115);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(8,0.07359131);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(9,0.06366325);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(10,0.05369176);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(11,0.04793886);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(12,0.04101613);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(13,0.03398978);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(14,0.02750895);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(15,0.02116835);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(16,0.0178468);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(17,0.01416967);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(18,0.009652258);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(19,0.007716725);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(20,0.005993017);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(21,0.004160449);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(22,0.001666007);
   VbbHcc_MC_Aplanarity_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_MC_Aplanarity_stack_2 = new TH1D("VbbHcc_MC_Aplanarity_stack_2","",50,0,1);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(1,10.6524);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(2,4.965479);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(3,3.007065);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(4,2.024922);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(5,1.360028);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(6,0.903982);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(7,0.6567373);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(8,0.4215337);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(9,0.2882363);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(10,0.1983229);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(11,0.140433);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(12,0.08459351);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(13,0.05876656);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(14,0.03252163);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(15,0.02182275);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(16,0.01234305);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(17,0.004291649);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(18,0.0024176);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(19,0.001011054);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(20,0.0005241166);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(21,0.0005028881);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(22,0.0001557144);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(1,0.05025969);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(2,0.03464058);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(3,0.02700933);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(4,0.02216894);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(5,0.01820025);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(6,0.01481856);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(7,0.01264043);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(8,0.01014904);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(9,0.008383707);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(10,0.006968686);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(11,0.005850334);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(12,0.004522546);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(13,0.003817498);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(14,0.002816747);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(15,0.002350114);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(16,0.001711697);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(17,0.001007519);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(18,0.0007710686);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(19,0.0004891948);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(20,0.0003706176);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(21,0.0003558024);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(22,0.0001557144);
   VbbHcc_MC_Aplanarity_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_signal_17->Modified();
   Aplanarity_signal_17->cd();
   Aplanarity_signal_17->SetSelected(Aplanarity_signal_17);
}
