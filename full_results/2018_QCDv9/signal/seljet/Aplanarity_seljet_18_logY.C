#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_18_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_18/Aplanarity_seljet_18
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_18 = new TCanvas("Aplanarity_seljet_18", "Aplanarity_seljet_18",0,0,600,600);
   Aplanarity_seljet_18->SetHighLightColor(2);
   Aplanarity_seljet_18->Range(-0.2183529,0.09080057,1.171633,4.470803);
   Aplanarity_seljet_18->SetFillColor(0);
   Aplanarity_seljet_18->SetFillStyle(4000);
   Aplanarity_seljet_18->SetBorderMode(0);
   Aplanarity_seljet_18->SetBorderSize(2);
   Aplanarity_seljet_18->SetLogy();
   Aplanarity_seljet_18->SetLeftMargin(0.15709);
   Aplanarity_seljet_18->SetRightMargin(0.1234783);
   Aplanarity_seljet_18->SetBottomMargin(0.12);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(6880.032);
   
   TH1F *st_stack_319 = new TH1F("st_stack_319","",50,0,1);
   st_stack_319->SetMinimum(4.13429);
   st_stack_319->SetMaximum(10784.57);
   st_stack_319->SetDirectory(0);
   st_stack_319->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_319->SetLineColor(ci);
   st_stack_319->GetXaxis()->SetTitle("Aplanarity");
   st_stack_319->GetXaxis()->SetRange(1,50);
   st_stack_319->GetXaxis()->SetLabelFont(42);
   st_stack_319->GetXaxis()->SetTitleOffset(1);
   st_stack_319->GetXaxis()->SetTitleFont(42);
   st_stack_319->GetYaxis()->SetTitle("Events/0.02");
   st_stack_319->GetYaxis()->SetLabelFont(42);
   st_stack_319->GetYaxis()->SetTitleSize(0.037);
   st_stack_319->GetYaxis()->SetTitleFont(42);
   st_stack_319->GetZaxis()->SetLabelFont(42);
   st_stack_319->GetZaxis()->SetTitleOffset(1);
   st_stack_319->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_319);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,49.466);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,36.29295);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,24.16206);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,15.92465);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,11.15966);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,8.131324);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,5.852861);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,4.045288);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,3.122575);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,2.185013);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,1.579298);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,1.151177);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,0.8022649);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,0.5073792);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.3563611);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.2637154);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.1494807);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.0836362);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.0606449);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.02757609);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.007431723);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,0.006179143);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.3992701);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.3397466);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.2880444);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.2208975);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.1817745);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.1553141);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.1357621);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.1085479);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.1442356);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.07753374);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.06622764);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.05717667);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.06138669);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.03751969);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.0308857);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.02639879);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.02037909);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.01517169);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.01303386);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.008832354);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.004391175);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,0.003450681);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(65138);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,19.33432);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,14.36588);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,9.541239);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,6.427296);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,4.29648);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,3.004185);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,2.037753);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,1.435304);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,0.9963267);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,0.6821743);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.5055987);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.3404185);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.2084686);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.1345891);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.08378113);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.04906009);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.03079881);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.01255166);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.007768102);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.003383352);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.001942964);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,0.0007414566);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.08654157);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.07511705);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.06290409);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.04946866);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.04057351);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.03339378);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.02732405);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.02360424);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.01988316);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.01607977);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.01520522);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.01880215);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.008813795);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.006897612);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.005524773);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.004164803);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.004188345);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.002119366);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.001589674);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.001088355);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.0008066698);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,0.0005311609);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(186422);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_seljet_18->Modified();
   Aplanarity_seljet_18->cd();
   Aplanarity_seljet_18->SetSelected(Aplanarity_seljet_18);
}
