#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,-0.2351446,1.171633,1.724393);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
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
   st->SetMaximum(1.52844);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",50,0,1);
   st_stack_127->SetMinimum(0);
   st_stack_127->SetMaximum(1.52844);
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
   st_stack_127->GetYaxis()->SetTitle("Events/0.02");
   st_stack_127->GetYaxis()->SetLabelFont(42);
   st_stack_127->GetYaxis()->SetTitleSize(0.037);
   st_stack_127->GetYaxis()->SetTitleFont(42);
   st_stack_127->GetZaxis()->SetLabelFont(42);
   st_stack_127->GetZaxis()->SetTitleOffset(1);
   st_stack_127->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_127);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.7956113);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.6155739);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.5451104);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.3550828);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.253559);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.1850476);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.1744952);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.09603716);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.06827736);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.04482436);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.04373623);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.04162958);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.02039457);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.007568975);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.004449949);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.008708529);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.004938943);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.04641511);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.04037491);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.03813153);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.03133815);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.02613064);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.02209038);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.02224616);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.01626487);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.01399857);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.01095439);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.01075606);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.01053657);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.007221636);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.004381061);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.005162405);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.004852385);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.003496195);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.2233484);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.1859557);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.1220649);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.09950273);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.07284988);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.04831016);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.03434778);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.02304815);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.01272418);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.008786271);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.006262129);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.008373852);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.003273859);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.001446012);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.001155337);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.001042711);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0008174792);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,0.0007287886);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.009270777);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.008672121);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.006788309);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.006194734);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.005344527);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.004290988);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.003593528);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.003020395);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.002210012);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.001825468);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.001488344);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.001796099);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.001092133);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.000686657);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0006631768);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0006178867);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0005907518);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,0.0005154493);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2500);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
