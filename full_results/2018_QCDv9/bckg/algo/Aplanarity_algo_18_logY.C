#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,-0.4471795,1.171633,7.070146);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15709);
   Aplanarity_algo_18->SetRightMargin(0.1234783);
   Aplanarity_algo_18->SetBottomMargin(0.12);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1039107);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",50,0,1);
   st_stack_127->SetMinimum(2.850359);
   st_stack_127->SetMaximum(2081676);
   st_stack_127->SetDirectory(0);
   st_stack_127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_127->SetLineColor(ci);
   st_stack_127->GetXaxis()->SetTitle("Aplanarity");
   st_stack_127->GetXaxis()->SetRange(1,50);
   st_stack_127->GetXaxis()->SetLabelFont(42);
   st_stack_127->GetXaxis()->SetTitleOffset(1);
   st_stack_127->GetXaxis()->SetTitleFont(42);
   st_stack_127->GetYaxis()->SetTitle("Event/0.02");
   st_stack_127->GetYaxis()->SetLabelFont(42);
   st_stack_127->GetYaxis()->SetTitleSize(0.037);
   st_stack_127->GetYaxis()->SetTitleFont(42);
   st_stack_127->GetZaxis()->SetLabelFont(42);
   st_stack_127->GetZaxis()->SetTitleOffset(1);
   st_stack_127->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_127);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,835616.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,317202.1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,226301.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,133308.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,55633.65);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,28305.66);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,24939.73);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,18178.04);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,8398.052);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,4573.552);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,4951.296);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,4290.563);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,1799.258);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,2124.526);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2377.546);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,853.7163);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,32.72318);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,49141.16);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,16317.84);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,48426.44);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,31413.45);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,6730.745);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,4827.901);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,5038.883);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,5369.428);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,2434.057);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,2206.965);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,2575.135);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,2073.076);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,819.0654);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,1747.045);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2007.899);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,574.4687);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,32.72318);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(24627);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,26842.13);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,19144.19);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,12972.55);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,9044.998);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,6467.93);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,4739.515);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3491.646);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,2594.633);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1916.631);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1434.051);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1030.706);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,753.6226);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,538.9596);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,366.3707);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,257.3985);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,167.4356);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,108.4726);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,64.6251);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,34.23495);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,17.08856);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,8.808131);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,3.747874);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,0.653683);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,46.57645);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,39.5641);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,32.6557);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,27.03044);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,22.58136);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,19.57069);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,17.45982);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,14.44735);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,12.65334);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,10.80868);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,9.009875);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,7.937197);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,6.557372);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,5.275738);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,4.56675);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,3.587652);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,2.964821);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,2.35185);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.620757);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,1.135178);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.8653346);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.5341507);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2199081);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(1407385);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
