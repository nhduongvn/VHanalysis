#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,0.4719792,1.171633,2.849214);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(314.5579);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(5.718042);
   st_stack_189->SetMaximum(408.7807);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Events/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,2.122658);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1.456163);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,1.072278);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.8440533);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.5429111);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.4453104);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.2882312);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.2061082);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.1541078);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.1119362);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.1082414);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.03978951);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.04485485);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.0211864);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.0133173);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.006886843);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.008505292);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.002017336);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,0.003195014);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,0.002731203);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.05715948);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.0477172);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.04091082);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.03622904);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.02916525);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.02628938);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.02159634);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.01810932);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.01531392);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.01331243);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.01305271);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.007797196);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.008385788);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.005667808);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.004578763);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.003240908);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.003595089);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.001580844);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,0.001974178);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,0.001987462);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(5476);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1.022922);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.6253529);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.3963085);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.2579262);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.1648682);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.1192995);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.08050467);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.06135775);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.0437573);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.02564918);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.01377047);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.01342503);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.007044913);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.006447955);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.003694687);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.001179424);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0005990854);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.0004057697);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.0003711445);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0001892188);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,8.976682e-05);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.01386408);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.01088157);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.00866066);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.006989408);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.005595552);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.004781483);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.003905128);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.003415167);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.002888733);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.002211006);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.001621363);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.001619737);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.001167354);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001097591);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.0008420734);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.0004744119);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0003462943);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0002872149);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0002602752);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0001892188);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,8.976682e-05);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
