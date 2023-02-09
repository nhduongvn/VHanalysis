void Z_dR_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Thu Feb  9 09:44:32 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,0.6226756,7.029799,2.270193);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLogy();
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(105.8013);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(6.612683);
   st_stack_83->SetMaximum(127.4798);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_83->GetXaxis()->SetRange(1,30);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetLabelSize(0.035);
   st_stack_83->GetXaxis()->SetTitleSize(0.035);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Events/0.2");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetLabelSize(0.035);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleOffset(0);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetLabelSize(0.035);
   st_stack_83->GetZaxis()->SetTitleSize(0.035);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.3594235);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.5788783);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.6828311);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.7672536);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.7095091);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.5808395);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.4751499);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.2975691);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.2296447);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.1819325);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.1015576);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.0987647);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.07730163);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.05428121);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.01640409);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.007202595);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.004854872);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.004810331);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,0.003189074);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.03166502);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.042139);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.04292156);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.06061796);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.04444523);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.04266641);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.03641511);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.02934221);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.02511704);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.02209049);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.01637785);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.0160472);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.01403982);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.01293293);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.006820652);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.004038793);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.003432928);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.003402067);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,0.003189074);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(2134);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.06885221);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.1848402);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.2666564);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.2907597);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.2367992);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.1475624);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.07261942);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.04858028);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.03166347);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.02179142);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.02041869);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.01685327);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.01339541);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.01255556);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.007477962);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.001903679);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.003321009);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.001333167);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0004199154);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,0.0003035629);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.005594453);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.00847934);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.0100514);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.01054305);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.009131502);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.007266335);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.005016736);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.004140761);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.003292236);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.002742491);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.002671131);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.002433928);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.002172757);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.002084345);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.001649568);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0007401654);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.001117024);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0006666554);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0004199154);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.0003035629);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(4285);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
