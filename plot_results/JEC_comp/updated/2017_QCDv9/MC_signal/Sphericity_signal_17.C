#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_signal_17()
{
//=========Macro generated from canvas: Sphericity_signal_17/Sphericity_signal_17
//=========  (Thu Mar 23 11:54:01 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_signal_17 = new TCanvas("Sphericity_signal_17", "Sphericity_signal_17",0,0,600,600);
   Sphericity_signal_17->SetHighLightColor(2);
   Sphericity_signal_17->Range(-0.2183529,-21.34254,1.171633,156.512);
   Sphericity_signal_17->SetFillColor(0);
   Sphericity_signal_17->SetFillStyle(4000);
   Sphericity_signal_17->SetBorderMode(0);
   Sphericity_signal_17->SetBorderSize(2);
   Sphericity_signal_17->SetLeftMargin(0.15709);
   Sphericity_signal_17->SetRightMargin(0.1234783);
   Sphericity_signal_17->SetBottomMargin(0.12);
   Sphericity_signal_17->SetFrameFillStyle(1000);
   Sphericity_signal_17->SetFrameBorderMode(0);
   Sphericity_signal_17->SetFrameFillStyle(1000);
   Sphericity_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(138.7265);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",25,0,1);
   st_stack_75->SetMinimum(0);
   st_stack_75->SetMaximum(138.7265);
   st_stack_75->SetDirectory(0);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->GetXaxis()->SetTitle("Sphericity");
   st_stack_75->GetXaxis()->SetRange(1,25);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetTitleOffset(1);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Event/0.04");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetTitleSize(0.037);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetTitleOffset(1);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *VbbHcc_MC_Sphericity_stack_1 = new TH1D("VbbHcc_MC_Sphericity_stack_1","",25,0,1);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(0,0.009841686);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(1,90.30493);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(2,26.44023);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(3,14.89788);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(4,10.18589);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(5,7.704276);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(6,5.984036);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(7,4.809346);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(8,3.890139);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(9,3.206935);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(10,2.806043);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(11,2.365731);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(12,1.877348);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(13,1.51034);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(14,1.30158);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(15,0.96258);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(16,0.6806767);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(17,0.5435224);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(18,0.2892934);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(19,0.047943);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(0,0.005150842);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(1,0.4195611);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(2,0.2275396);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(3,0.1712263);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(4,0.1414611);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(5,0.1232526);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(6,0.1075582);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(7,0.09685917);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(8,0.08741879);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(9,0.07891721);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(10,0.07407023);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(11,0.06740878);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(12,0.06062646);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(13,0.05440653);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(14,0.04988231);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(15,0.04282709);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(16,0.03701071);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(17,0.03269309);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(18,0.02377049);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(19,0.009640089);
   VbbHcc_MC_Sphericity_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_MC_Sphericity_stack_2 = new TH1D("VbbHcc_MC_Sphericity_stack_2","",25,0,1);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(1,24.83809);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(1,0.07724779);
   VbbHcc_MC_Sphericity_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_signal_17->Modified();
   Sphericity_signal_17->cd();
   Sphericity_signal_17->SetSelected(Sphericity_signal_17);
}
