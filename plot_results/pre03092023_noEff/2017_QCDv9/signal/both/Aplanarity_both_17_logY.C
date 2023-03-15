#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2183529,-3.24698,1.171633,0.5991735);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15709);
   Aplanarity_both_17->SetRightMargin(0.1234783);
   Aplanarity_both_17->SetBottomMargin(0.12);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(15.60193);
   st_stack_190->SetMaximum(1.638921);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("Aplanarity");
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Event/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1.370037);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.9563528);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.5792303);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.391231);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.257186);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.2337893);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.1448609);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.1020371);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.07397387);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.0609196);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.04109003);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.01195764);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.02748856);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.01428638);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.009890077);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.005442229);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.007043222);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.002746664);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,0.002279402);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.04245885);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.03542726);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.02787008);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.02322772);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.01825445);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.01773364);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.01396322);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.01170077);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.01012683);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.009150997);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.00722939);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.003879954);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.005944126);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.004347131);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.003247285);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.002740233);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.003156482);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.00194285);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,0.00165496);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(3542);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,0.5437447);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.4123698);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.2652099);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.1817905);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.1339678);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.09123126);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.05876356);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.04112108);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.03178875);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.02084265);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.01534403);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.01018851);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.007490344);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.00471944);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.001832507);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.001648155);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0008719122);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.0001249959);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.0005764743);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0002650749);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.0003368494);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.009528727);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.008354607);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.006692868);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.005551634);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.004779923);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.00393007);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.0031804);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.00265952);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.002357239);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.001889407);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.001611698);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.001325201);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.001143131);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.0009099766);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.0005567256);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.000525453);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0003959306);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0001249959);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0002955026);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0001938115);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.0002394342);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(11286);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
