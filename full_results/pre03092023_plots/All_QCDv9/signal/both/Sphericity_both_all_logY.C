#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_all_logY()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(-0.2183529,-3.342101,1.171633,0.5040528);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetLogy();
   Sphericity_both_all->SetLeftMargin(0.15709);
   Sphericity_both_all->SetRightMargin(0.1234783);
   Sphericity_both_all->SetBottomMargin(0.12);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_188 = new TH1F("st_stack_188","",25,0,1);
   st_stack_188->SetMinimum(16.72783);
   st_stack_188->SetMaximum(1.31655);
   st_stack_188->SetDirectory(0);
   st_stack_188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_188->SetLineColor(ci);
   st_stack_188->GetXaxis()->SetTitle("Sphericity");
   st_stack_188->GetXaxis()->SetRange(1,25);
   st_stack_188->GetXaxis()->SetLabelFont(42);
   st_stack_188->GetXaxis()->SetTitleOffset(1);
   st_stack_188->GetXaxis()->SetTitleFont(42);
   st_stack_188->GetYaxis()->SetTitle("Event/0.04");
   st_stack_188->GetYaxis()->SetLabelFont(42);
   st_stack_188->GetYaxis()->SetTitleSize(0.037);
   st_stack_188->GetYaxis()->SetTitleFont(42);
   st_stack_188->GetZaxis()->SetLabelFont(42);
   st_stack_188->GetZaxis()->SetTitleOffset(1);
   st_stack_188->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_188);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,0.1461654);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,0.5169559);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,0.9488538);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,1.12787);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,1.108625);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,1.070576);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,1.016256);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,0.8974383);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,0.8717012);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,0.8235025);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,0.7088973);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,0.6231958);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,0.6331255);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,0.5465933);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,0.5136552);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,0.3816946);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,0.2840695);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,0.2086654);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(19,0.1450812);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(20,0.07776259);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(21,0.02469821);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(22,0.01215487);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(24,0.001561997);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,0.01555977);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,0.02968702);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,0.04160037);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,0.05217672);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,0.04426566);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,0.04355459);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,0.04448788);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,0.04391814);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,0.03990477);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,0.04029582);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,0.03547624);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,0.0328106);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,0.03373746);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,0.03400853);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,0.0301329);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,0.02602025);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,0.0227582);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,0.01888559);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(19,0.01573399);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(20,0.01158239);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(21,0.006344024);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(22,0.004389186);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(24,0.001561997);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,0.07378265);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,0.2583742);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,0.3866289);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,0.4410904);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,0.4314179);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,0.4385388);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,0.4408982);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,0.4343009);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,0.4132662);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,0.3583901);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,0.3303678);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,0.2875281);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,0.2625594);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,0.2298461);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,0.1916964);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,0.1545823);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,0.1266728);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,0.0948503);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,0.04871737);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,0.02385301);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(21,0.008464865);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(22,0.000533787);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(23,0.001125039);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,0.003999644);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,0.007672147);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,0.009423355);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,0.01036939);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,0.009900357);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,0.01020115);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,0.01005939);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,0.0101027);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,0.009649037);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,0.009175387);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,0.0090065);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,0.008076356);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,0.00813824);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,0.007179305);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,0.0069415);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,0.006083893);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,0.005326577);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,0.005856359);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,0.003287468);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,0.002331789);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(21,0.001380843);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(22,0.0003084792);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(23,0.0005614967);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
