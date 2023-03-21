#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Mon Mar 20 11:48:34 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,-1.518151,1.171633,11.13311);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLeftMargin(0.15709);
   Aplanarity_both_all->SetRightMargin(0.1234783);
   Aplanarity_both_all->SetBottomMargin(0.12);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.867982);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0);
   st_stack_256->SetMaximum(9.867982);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetTitle("Aplanarity");
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetTitleOffset(1);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Event/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetTitleSize(0.037);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetTitleOffset(1);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,5.856065);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,3.879339);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,2.538982);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,1.63417);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,1.168269);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,0.8903783);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,0.6108825);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,0.4617611);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,0.302047);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,0.2276866);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,0.185852);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,0.1084883);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,0.1314564);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,0.06370952);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,0.03298423);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,0.0130651);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,0.01003691);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,0.006145459);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,0.003248252);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(22,0.002019195);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,0.1317948);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,0.09902688);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,0.08284335);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,0.06417779);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,0.05745518);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,0.04678638);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,0.03952678);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,0.03431784);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,0.02840514);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,0.02374405);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,0.02152903);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,0.01693051);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,0.01886802);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,0.0123964);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,0.008562143);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,0.005044753);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,0.00449813);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,0.003555881);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,0.002358393);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(22,0.002019195);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,2.334361);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,1.738721);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,1.15267);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,0.790303);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,0.5379664);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,0.3851193);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,0.264822);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,0.1837803);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,0.1206731);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,0.08404408);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,0.06489376);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,0.04016559);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,0.03008636);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,0.01615222);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,0.009165008);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,0.006352792);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.003414757);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,0.0005997423);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,0.002954245);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,0.0008124419);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,0.0004800258);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,0.02797111);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,0.02396812);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,0.01955223);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,0.016238);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,0.0132273);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,0.01113447);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,0.009448855);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,0.009252802);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,0.006205369);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,0.005528462);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,0.005731003);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,0.004387673);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.003207305);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.002219911);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.001733689);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,0.001436838);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.001061347);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,0.0004577005);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,0.001057377);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,0.0005150179);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,0.0003412046);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
