#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_16()
{
//=========Macro generated from canvas: Z_pt_16/Z_pt_16
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_16 = new TCanvas("Z_pt_16", "Z_pt_16",0,0,600,600);
   Z_pt_16->SetHighLightColor(2);
   Z_pt_16->Range(37.97653,-0.2106593,1705.96,1.544835);
   Z_pt_16->SetFillColor(0);
   Z_pt_16->SetFillStyle(4000);
   Z_pt_16->SetBorderMode(0);
   Z_pt_16->SetBorderSize(2);
   Z_pt_16->SetLeftMargin(0.15709);
   Z_pt_16->SetRightMargin(0.1234783);
   Z_pt_16->SetBottomMargin(0.12);
   Z_pt_16->SetFrameFillStyle(1000);
   Z_pt_16->SetFrameBorderMode(0);
   Z_pt_16->SetFrameFillStyle(1000);
   Z_pt_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",40,0,2000);
   st_stack_61->SetMinimum(0);
   st_stack_61->SetMaximum(1.369286);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_61->GetXaxis()->SetRange(7,30);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/50.0");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_MC_Z_pt_stack_1 = new TH1D("VbbHcc_MC_Z_pt_stack_1","",40,0,2000);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(1,46.70128);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(2,56.19143);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(3,25.80914);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(4,10.22075);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(5,4.307549);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(6,1.895464);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(7,0.9698572);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(8,0.521475);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(9,0.287332);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(10,0.104799);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(11,0.08428236);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(12,0.04405429);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(13,0.04315149);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(14,0.02353143);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(16,0.00586072);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(17,0.009009793);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(18,0.003032998);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(19,0.002997385);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(20,0.002869221);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(1,0.3841923);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(2,0.4180719);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(3,0.2815834);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(4,0.1756458);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(5,0.1140324);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(6,0.07560746);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(7,0.05343968);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(8,0.03945132);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(9,0.03053705);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(10,0.01820938);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(11,0.01557073);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(12,0.01217303);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(13,0.01206127);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(14,0.009401909);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(16,0.005805891);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(17,0.005213359);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(18,0.003032998);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(19,0.002997385);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(20,0.002869221);
   VbbHcc_MC_Z_pt_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_Z_pt_stack_2 = new TH1D("VbbHcc_MC_Z_pt_stack_2","",40,0,2000);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(1,1.550314);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(2,4.746665);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(3,6.569049);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(4,4.285146);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(5,1.87266);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(6,0.7779071);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(7,0.3342243);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(8,0.1595598);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(9,0.06510037);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(10,0.03719031);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(11,0.01960533);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(12,0.006487934);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(13,0.004796282);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(14,0.003727259);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(15,0.0005918462);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(16,0.0006945116);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(17,0.000380021);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(18,0.0003861056);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(22,0.0003705249);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(1,0.02438637);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(2,0.04261499);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(3,0.0501208);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(4,0.04044974);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(5,0.02668511);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(6,0.01718574);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(7,0.01125981);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(8,0.007738892);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(9,0.00495691);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(10,0.003771475);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(11,0.002740926);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(12,0.001552874);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(13,0.001388243);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(14,0.001185469);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(15,0.0004449401);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(16,0.0004926795);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(17,0.000380021);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(18,0.0003861056);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(22,0.0003705249);
   VbbHcc_MC_Z_pt_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_16->Modified();
   Z_pt_16->cd();
   Z_pt_16->SetSelected(Z_pt_16);
}
