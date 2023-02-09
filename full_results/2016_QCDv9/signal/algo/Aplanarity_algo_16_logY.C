void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Feb  9 09:44:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-0.1311964,1.171633,0.9621069);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15709);
   Aplanarity_algo_16->SetRightMargin(0.1234783);
   Aplanarity_algo_16->SetBottomMargin(0.12);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(81.21682);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(-3.283881e+09);
   st_stack_125->SetMaximum(-50.19774);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("Aplanarity");
   st_stack_125->GetXaxis()->SetRange(1,50);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetLabelSize(0.035);
   st_stack_125->GetXaxis()->SetTitleSize(0.035);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Events/0.02");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetLabelSize(0.035);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleOffset(0);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetLabelSize(0.035);
   st_stack_125->GetZaxis()->SetTitleSize(0.035);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.6476679);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.4203176);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.3701378);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.2318052);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.1760971);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.08831466);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.09689548);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.08734006);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.04208004);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.03406942);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.03266292);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.02031199);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.01768445);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.01808532);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.002869221);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.004831356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(21,0.002871662);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.0445372);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.03556883);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.03364069);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.02675753);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.02300422);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.01622064);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.01685685);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.01604192);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.01216725);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.01045348);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.009866004);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.007677828);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.007228028);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.007415173);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.002869221);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.003475879);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(21,0.002871662);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(816);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.1645003);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.1337166);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.09289754);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.07083154);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.04704412);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.03164361);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.02413648);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.01666404);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.01144113);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.007882851);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.00468621);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.002345961);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.002907631);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.007907063);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.007168143);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.005994227);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.005243216);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.004266273);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.003484157);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.003080482);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.002548912);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.002091126);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.001764735);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.001315562);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.0009596783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.001056859);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(1618);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
