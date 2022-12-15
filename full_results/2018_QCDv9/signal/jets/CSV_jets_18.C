void CSV_jets_18()
{
//=========Macro generated from canvas: CSV_jets_18/CSV_jets_18
//=========  (Thu Dec 15 10:04:52 2022) by ROOT version 6.14/09
   TCanvas *CSV_jets_18 = new TCanvas("CSV_jets_18", "CSV_jets_18",0,0,600,600);
   CSV_jets_18->SetHighLightColor(2);
   CSV_jets_18->Range(-0.2183529,-582.6425,1.171633,4272.711);
   CSV_jets_18->SetFillColor(0);
   CSV_jets_18->SetFillStyle(4000);
   CSV_jets_18->SetBorderMode(0);
   CSV_jets_18->SetBorderSize(2);
   CSV_jets_18->SetLeftMargin(0.15709);
   CSV_jets_18->SetRightMargin(0.1234783);
   CSV_jets_18->SetBottomMargin(0.12);
   CSV_jets_18->SetFrameFillStyle(1000);
   CSV_jets_18->SetFrameBorderMode(0);
   CSV_jets_18->SetFrameFillStyle(1000);
   CSV_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3606.834);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",20,0,1);
   st_stack_7->SetMinimum(0);
   st_stack_7->SetMaximum(3787.176);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_7->GetXaxis()->SetRange(1,20);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetLabelSize(0.035);
   st_stack_7->GetXaxis()->SetTitleSize(0.035);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/0.05");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.035);
   st_stack_7->GetYaxis()->SetTitleSize(0.037);
   st_stack_7->GetYaxis()->SetTitleOffset(0);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetLabelSize(0.035);
   st_stack_7->GetZaxis()->SetTitleSize(0.035);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,2016.594);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,309.8355);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,154.1551);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,101.7527);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,75.95121);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,61.14387);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,50.27298);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,42.61896);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,34.0952);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,30.81434);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,27.88712);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,24.65713);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,21.22348);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,19.39813);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,18.22814);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,18.69024);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,17.38201);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,17.82248);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,24.12003);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,123.2752);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,2.338362);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.9154937);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.6462021);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.5252632);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.4563131);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.407941);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.3707723);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.3400066);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,0.3039397);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,0.2892558);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,0.2748824);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,0.2602185);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,0.2397902);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,0.2312546);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,0.2214894);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,0.2249241);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,0.2185516);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,0.2207549);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,0.2553476);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.5812925);
   VbbHcc_jets_CSV_stack_1->SetEntries(1437776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,387.9618);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,55.06054);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,26.51358);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,17.36041);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,13.00887);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,10.43061);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,8.402285);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,7.120005);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,5.934106);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,5.126424);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,4.701632);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,4.209325);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,3.691978);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,3.425656);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,3.227098);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,3.228546);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,3.138781);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,3.332873);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,4.50644);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,25.26949);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.3870302);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,0.1453075);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,0.1009043);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,0.08220692);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,0.07056116);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,0.06319469);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,0.0571289);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,0.05235802);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,0.04783009);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,0.04440596);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,0.04230596);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,0.04014346);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,0.03778742);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,0.03613945);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,0.03523693);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,0.03513571);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,0.03454016);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,0.03567622);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,0.04243238);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,0.09907904);
   VbbHcc_jets_CSV_stack_2->SetEntries(1735131);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","ZHcc","F");

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
   CSV_jets_18->Modified();
   CSV_jets_18->cd();
   CSV_jets_18->SetSelected(CSV_jets_18);
}
