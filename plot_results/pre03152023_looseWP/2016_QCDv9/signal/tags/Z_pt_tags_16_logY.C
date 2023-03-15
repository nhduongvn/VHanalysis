#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_16_logY()
{
//=========Macro generated from canvas: Z_pt_tags_16/Z_pt_tags_16
//=========  (Fri Mar 10 11:27:12 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_16 = new TCanvas("Z_pt_tags_16", "Z_pt_tags_16",0,0,600,600);
   Z_pt_tags_16->SetHighLightColor(2);
   Z_pt_tags_16->Range(37.97653,-0.3781892,1705.96,1.273406);
   Z_pt_tags_16->SetFillColor(0);
   Z_pt_tags_16->SetFillStyle(4000);
   Z_pt_tags_16->SetBorderMode(0);
   Z_pt_tags_16->SetBorderSize(2);
   Z_pt_tags_16->SetLogy();
   Z_pt_tags_16->SetLeftMargin(0.15709);
   Z_pt_tags_16->SetRightMargin(0.1234783);
   Z_pt_tags_16->SetBottomMargin(0.12);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(10.64406);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",40,0,2000);
   st_stack_9->SetMinimum(0.6606968);
   st_stack_9->SetMaximum(12.83058);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_9->GetXaxis()->SetRange(7,30);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,4.932406);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,8.83457);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,8.697359);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,5.186772);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,3.019008);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,1.719576);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.9589675);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.5034249);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.3482636);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.1578864);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.09109885);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.05740229);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.03307967);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.01668813);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,0.003126247);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.005839366);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,0.002690428);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(18,0.008410285);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(19,0.002997385);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(20,0.005154445);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(21,0.002861358);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.1218661);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.1625954);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.1610091);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.1245806);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.09494711);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.07205276);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.05341651);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.03845323);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.03217593);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.02222319);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.01724256);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.01290588);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.0100028);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.006501208);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,0.003126247);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.004129614);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,0.002690428);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(18,0.004856756);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(19,0.002997385);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(20,0.003777823);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(21,0.002861358);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(12307);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,1.409037);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,2.827012);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,3.504637);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,2.581438);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,1.592993);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.8589392);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.4526958);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.2281059);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.1018032);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.0455186);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.02502216);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.01548718);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.007332002);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.004246537);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.003385732);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.001303463);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,0.001503331);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(18,0.0003782624);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.0006520687);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0007581129);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(24,0.000370343);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.02320013);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.03284763);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.03657209);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.03136337);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.02464558);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.01807477);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.01312843);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.009248899);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.006222102);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.004162568);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.003076443);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.002408233);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.001634634);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.001264407);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.001133535);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0006545902);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,0.0007518275);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(18,0.0003782624);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0004643069);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0005362026);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(24,0.000370343);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(36553);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_16->Modified();
   Z_pt_tags_16->cd();
   Z_pt_tags_16->SetSelected(Z_pt_tags_16);
}
