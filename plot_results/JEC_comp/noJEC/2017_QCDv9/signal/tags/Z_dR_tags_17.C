#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Mon Mar 20 11:48:29 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,-0.2310621,7.029799,1.694455);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.501903);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(0);
   st_stack_18->SetMaximum(1.501903);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Event/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.4942172);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.8078539);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,0.8288577);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,0.7557344);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,0.4725233);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,0.3369515);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,0.2766587);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.2300052);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.2001615);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.2379931);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.2239635);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.2671121);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.3332012);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.3155495);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.1185699);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.04727081);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.02797398);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.0160833);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.005625221);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.005578777);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.03054468);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.03888322);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.03984936);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.0379095);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.02999295);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.0254309);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.02255234);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.02093531);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.01921432);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.02135227);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.02055971);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.02242955);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.0254316);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.02404425);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.01512222);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.009328792);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.007105155);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.005464446);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.003254303);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.003223819);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.0001524791);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.1819056);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.3703413);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.4177221);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.3471748);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.2252447);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.1242873);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.0859683);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.0737901);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.07127492);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.08719139);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.0949908);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.1068198);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.1166015);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.1156648);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.05524525);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.02457906);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.01403766);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.008941509);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.005015326);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.004523171);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.002465043);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.0005415839);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.0001721789);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,0.0001839373);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.0001524791);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.006554045);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.009424126);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.01006269);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.009180379);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.007353835);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.005465209);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.004589325);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.00423339);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.004117906);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.004596548);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.00478394);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.005086968);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.005269627);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.005243819);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.003657032);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.002435539);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.001873451);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.001462705);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.001091183);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.001042353);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.0007613037);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0003235527);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0001721789);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,0.0001839373);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
