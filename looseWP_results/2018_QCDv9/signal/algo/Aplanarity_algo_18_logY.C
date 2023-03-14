#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Fri Mar 10 11:27:14 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,-0.3575304,1.171633,1.19702);
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
   st->SetMinimum(1);
   st->SetMaximum(9.224216);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",50,0,1);
   st_stack_127->SetMinimum(0.6745523);
   st_stack_127->SetMaximum(11.00436);
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
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,5.712828);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,3.787939);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,2.569497);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,1.723012);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,1.159071);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.88511);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.5814175);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.4327391);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.3271115);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.229622);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.1827795);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.1287354);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.09828647);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.04114752);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.0461079);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.02194198);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.01046577);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,0.005165415);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,0.009281687);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,0.002434505);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(21,0.003189074);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.1410658);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.1057888);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.08438238);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.07077932);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.05556975);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.04854111);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.04227146);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.03525322);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.02966025);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.02520516);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.02257315);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.01852497);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.01877847);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.01016858);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.01109564);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.007413729);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.005265448);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,0.0036525);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,0.00545208);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,0.002434505);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(21,0.003189074);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(7188);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,1.943271);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1.453164);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.9746241);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.6473479);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.4090321);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.3240625);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.2205471);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.1318182);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.100551);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.06251642);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.05230409);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.03153845);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.0206568);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.01419558);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.008883968);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.005347145);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.003741118);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.001355876);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,0.001418222);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,0.0003035629);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,0.0004309483);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.0272111);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.02334109);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.01963217);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.01587536);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.0120621);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.01072966);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.008909398);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.007117135);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.006680904);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.005000582);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.004357185);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.004175817);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.002686387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.002246493);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.001786847);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.001365974);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.001295168);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.000678058);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,0.0006699061);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,0.0003035629);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.0004309483);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(18991);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

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
